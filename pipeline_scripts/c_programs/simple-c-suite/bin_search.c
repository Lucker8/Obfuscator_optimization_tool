#include <stdio.h>

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

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 0) return 0;

    int a[10000];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int target;
    scanf("%d", &target);

    printf("%d\n", bsearch_iter(a, n, target));
    return 0;
}
