// benchmark.c
// Unified harness for simple algorithm benchmarks (obfuscation-friendly).
//
// Input format (repeatable until op=0 or EOF):
//   op [op-specific inputs...]
//
// Ops:
//  1: even/odd                -> n
//  2: armstrong               -> n
//  3: average                 -> count, then count numbers
//  4: decimal to binary       -> n
//  5: date diff Y M D         -> y1 m1 d1 y2 m2 d2
//  6: max in array            -> n, then n ints
//  7: quicksort               -> n, then n ints (prints sorted)
//  8: tree traversals (BST)   -> n, then n ints (prints inorder/pre/post)
//  9: binary search           -> n, then n ints (sorted), then target (prints index or -1)
// 10: dijkstra (matrix)       -> n, then n*n ints (-1 no edge), then src (prints dist list)
//
// Example:
//   1 17
//   1 18
//   4 13
//   0
//
// Build:
//   gcc -O2 -std=c11 benchmark.c -o benchmark
// Optional timing:
//   gcc -O2 -std=c11 -DBENCH_TIME benchmark.c -o benchmark

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

#define MAXA  200000
#define MAXN  200

// -------------------- timing (optional) --------------------
#ifdef BENCH_TIME
static double now_seconds(void) {
    // portable-ish CPU time; for wall time, replace with clock_gettime on POSIX
    return (double)clock() / (double)CLOCKS_PER_SEC;
}
#define TSTART() double __t0 = now_seconds()
#define TEND(opid) do { \
    double __t1 = now_seconds(); \
    fprintf(stderr, "op=%d time=%.6f s\n", (opid), (__t1 - __t0)); \
} while(0)
#else
#define TSTART() do{}while(0)
#define TEND(opid) do{}while(0)
#endif

// -------------------- 1) even/odd --------------------
static int op_even_odd(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;
    printf("%s\n", (n % 2 == 0) ? "even" : "odd");
    return 1;
}

// -------------------- 2) armstrong --------------------
static long long ipowll(long long a, int e) {
    long long r = 1;
    while (e-- > 0) r *= a;
    return r;
}

static int op_armstrong(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;

    if (n < 0) { printf("no\n"); return 1; }

    long long tmp = n;
    int digits = 0;
    do { digits++; tmp /= 10; } while (tmp != 0);

    tmp = n;
    long long sum = 0;
    do {
        int d = (int)(tmp % 10);
        sum += ipowll(d, digits);
        tmp /= 10;
    } while (tmp != 0);

    printf("%s\n", (sum == n) ? "yes" : "no");
    return 1;
}

// -------------------- 3) average --------------------
static int op_average(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n <= 0) { printf("0.000000\n"); return 1; }

    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        double x;
        if (scanf("%lf", &x) != 1) x = 0.0;
        sum += x;
    }
    printf("%.6f\n", sum / n);
    return 1;
}

// -------------------- 4) decimal to binary --------------------
static int op_dec2bin(void) {
    unsigned int n;
    if (scanf("%u", &n) != 1) return 0;

    if (n == 0) { printf("0\n"); return 1; }

    char bits[64];
    int k = 0;
    while (n > 0) {
        bits[k++] = (char)('0' + (n & 1u));
        n >>= 1u;
    }
    for (int i = k - 1; i >= 0; i--) putchar(bits[i]);
    putchar('\n');
    return 1;
}

// -------------------- 5) date diff (years, months, days) --------------------
static int is_leap(int y) {
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

static int days_in_month(int y, int m) {
    static const int dm[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (m == 2) return dm[m-1] + (is_leap(y) ? 1 : 0);
    return dm[m-1];
}

static void normalize_order(int *y1,int *m1,int *d1,int *y2,int *m2,int *d2) {
    if (*y1 > *y2 ||
        (*y1 == *y2 && *m1 > *m2) ||
        (*y1 == *y2 && *m1 == *m2 && *d1 > *d2)) {
        int ty=*y1, tm=*m1, td=*d1;
        *y1=*y2; *m1=*m2; *d1=*d2;
        *y2=ty;  *m2=tm;  *d2=td;
    }
}

static int op_date_diff(void) {
    int y1,m1,d1,y2,m2,d2;
    if (scanf("%d %d %d %d %d %d", &y1,&m1,&d1,&y2,&m2,&d2) != 6) return 0;

    normalize_order(&y1,&m1,&d1,&y2,&m2,&d2);

    int years = y2 - y1;
    int months = m2 - m1;
    int days = d2 - d1;

    if (days < 0) {
        months--;
        int py = y2, pm = m2 - 1;
        if (pm == 0) { pm = 12; py--; }
        days += days_in_month(py, pm);
    }
    if (months < 0) {
        years--;
        months += 12;
    }

    printf("%d years %d months %d days\n", years, months, days);
    return 1;
}

// -------------------- 6) max in array --------------------
static int op_array_max(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n <= 0) { printf("0\n"); return 1; }
    if (n > MAXA) n = MAXA;

    int mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        int x;
        if (scanf("%d", &x) != 1) x = 0;
        if (x > mx) mx = x;
    }
    printf("%d\n", mx);
    return 1;
}

// -------------------- 7) quicksort --------------------
static void swap_int(int *a, int *b) { int t = *a; *a = *b; *b = t; }

static int partition(int *arr, int lo, int hi) {
    int pivot = arr[hi];
    int i = lo - 1;
    for (int j = lo; j < hi; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap_int(&arr[i], &arr[j]);
        }
    }
    swap_int(&arr[i+1], &arr[hi]);
    return i + 1;
}

static void quicksort(int *arr, int lo, int hi) {
    if (lo < hi) {
        int p = partition(arr, lo, hi);
        quicksort(arr, lo, p - 1);
        quicksort(arr, p + 1, hi);
    }
}

static int op_quicksort(void) {
    static int a[MAXA];
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n < 0) { putchar('\n'); return 1; }
    if (n > MAXA) n = MAXA;

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) a[i] = 0;
    }
    if (n > 0) quicksort(a, 0, n - 1);

    for (int i = 0; i < n; i++) {
        if (i) putchar(' ');
        printf("%d", a[i]);
    }
    putchar('\n');
    return 1;
}

// -------------------- 8) tree traversals (BST) --------------------
typedef struct Node {
    int key;
    struct Node *left, *right;
} Node;

static Node* new_node(int key) {
    Node *n = (Node*)malloc(sizeof(Node));
    if (!n) exit(1);
    n->key = key; n->left = NULL; n->right = NULL;
    return n;
}

static Node* insert_bst(Node *root, int key) {
    if (!root) return new_node(key);
    if (key < root->key) root->left = insert_bst(root->left, key);
    else root->right = insert_bst(root->right, key);
    return root;
}

static void inorder(Node *r) {
    if (!r) return;
    inorder(r->left);
    printf("%d ", r->key);
    inorder(r->right);
}
static void preorder(Node *r) {
    if (!r) return;
    printf("%d ", r->key);
    preorder(r->left);
    preorder(r->right);
}
static void postorder(Node *r) {
    if (!r) return;
    postorder(r->left);
    postorder(r->right);
    printf("%d ", r->key);
}

static void free_tree(Node *r) {
    if (!r) return;
    free_tree(r->left);
    free_tree(r->right);
    free(r);
}

static int op_tree_traversals(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n < 0) { putchar('\n'); putchar('\n'); putchar('\n'); return 1; }

    Node *root = NULL;
    for (int i = 0; i < n; i++) {
        int x; if (scanf("%d", &x) != 1) x = 0;
        root = insert_bst(root, x);
    }

    inorder(root);   putchar('\n');
    preorder(root);  putchar('\n');
    postorder(root); putchar('\n');

    free_tree(root);
    return 1;
}

// -------------------- 9) binary search --------------------
static int bsearch_iter(const int *a, int n, int target) {
    int lo = 0, hi = n - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (a[mid] == target) return mid;
        if (a[mid] < target) lo = mid + 1;
        else hi = mid - 1;
    }
    return -1;
}

static int op_binary_search(void) {
    static int a[MAXA];
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n < 0) { printf("-1\n"); return 1; }
    if (n > MAXA) n = MAXA;

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) a[i] = 0;
    }

    int target;
    if (scanf("%d", &target) != 1) target = 0;

    printf("%d\n", bsearch_iter(a, n, target));
    return 1;
}

// -------------------- 10) dijkstra (adj matrix, O(n^2)) --------------------
static int min_dist(int dist[], int used[], int n) {
    int best = INT_MAX, idx = -1;
    for (int i = 0; i < n; i++) {
        if (!used[i] && dist[i] < best) {
            best = dist[i];
            idx = i;
        }
    }
    return idx;
}

static int op_dijkstra(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    if (n <= 0 || n > MAXN) { putchar('\n'); return 1; }

    static int w[MAXN][MAXN];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%d", &w[i][j]) != 1) w[i][j] = -1; // -1 => no edge
        }
    }

    int src;
    if (scanf("%d", &src) != 1) { putchar('\n'); return 1; }
    if (src < 0 || src >= n) { putchar('\n'); return 1; }

    int dist[MAXN], used[MAXN];
    for (int i = 0; i < n; i++) {
        dist[i] = INT_MAX;
        used[i] = 0;
    }
    dist[src] = 0;

    for (int iter = 0; iter < n; iter++) {
        int u = min_dist(dist, used, n);
        if (u == -1) break;
        used[u] = 1;

        for (int v = 0; v < n; v++) {
            if (w[u][v] >= 0 && !used[v] && dist[u] != INT_MAX) {
                int nd = dist[u] + w[u][v];
                if (nd < dist[v]) dist[v] = nd;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (dist[i] == INT_MAX) printf("INF");
        else printf("%d", dist[i]);
        if (i + 1 < n) putchar(' ');
    }
    putchar('\n');
    return 1;
}

// -------------------- main harness --------------------
#ifdef SINGLE_OP
int main(void) {
    while (1) {
        TSTART();
#if SINGLE_OP == 1
        if (!op_even_odd()) break;
        TEND(1);
#elif SINGLE_OP == 2
        if (!op_armstrong()) break;
        TEND(2);
#elif SINGLE_OP == 3
        if (!op_average()) break;
        TEND(3);
#elif SINGLE_OP == 4
        if (!op_dec2bin()) break;
        TEND(4);
#elif SINGLE_OP == 5
        if (!op_date_diff()) break;
        TEND(5);
#elif SINGLE_OP == 6
        if (!op_array_max()) break;
        TEND(6);
#elif SINGLE_OP == 7
        if (!op_quicksort()) break;
        TEND(7);
#elif SINGLE_OP == 8
        if (!op_tree_traversals()) break;
        TEND(8);
#elif SINGLE_OP == 9
        if (!op_binary_search()) break;
        TEND(9);
#elif SINGLE_OP == 10
        if (!op_dijkstra()) break;
        TEND(10);
#else
#error "Unsupported SINGLE_OP value"
#endif
    }
    return 0;
}
#else
int main(void) {
    int op;
    while (scanf("%d", &op) == 1) {
        if (op == 0) break;

        TSTART();
        switch (op) {
            case 1:  op_even_odd();        break;
            case 2:  op_armstrong();       break;
            case 3:  op_average();         break;
            case 4:  op_dec2bin();         break;
            case 5:  op_date_diff();       break;
            case 6:  op_array_max();       break;
            case 7:  op_quicksort();       break;
            case 8:  op_tree_traversals(); break;
            case 9:  op_binary_search();   break;
            case 10: op_dijkstra();        break;
            default:
                // Unknown op: ignore (or print something minimal)
                // printf("unknown\n");
                break;
        }
        TEND(op);
    }
    return 0;
}
#endif
