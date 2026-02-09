#include <stdio.h>
#include <limits.h>

#define MAXN 200

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

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAXN) return 0;

    int w[MAXN][MAXN];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &w[i][j]);
        }
    }

    int src;
    scanf("%d", &src);
    if (src < 0 || src >= n) return 0;

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

    return 0;
}
