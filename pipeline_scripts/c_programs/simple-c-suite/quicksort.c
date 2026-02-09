#include <stdio.h>

static void swap(int *a, int *b) { int t = *a; *a = *b; *b = t; }

static int partition(int *arr, int lo, int hi) {
    int pivot = arr[hi];
    int i = lo - 1;
    for (int j = lo; j < hi; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[hi]);
    return i + 1;
}

static void quicksort(int *arr, int lo, int hi) {
    if (lo < hi) {
        int p = partition(arr, lo, hi);
        quicksort(arr, lo, p - 1);
        quicksort(arr, p + 1, hi);
    }
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 0) return 0;

    int a[10000];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    if (n > 0) quicksort(a, 0, n - 1);

    for (int i = 0; i < n; i++) {
        if (i) putchar(' ');
        printf("%d", a[i]);
    }
    putchar('\n');
    return 0;
}
