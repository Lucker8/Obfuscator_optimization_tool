// if n then n numbers

#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        double x;
        if (scanf("%lf", &x) != 1) return 0;
        sum += x;
    }

    printf("%.6f\n", sum / n);
    return 0;
}
