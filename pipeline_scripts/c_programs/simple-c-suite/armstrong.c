#include <stdio.h>

static long long ipowll(long long a, int e) {
    long long r = 1;
    while (e-- > 0) r *= a;
    return r;
}

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;

    if (n < 0) { printf("no\n"); return 0; }

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

    if (sum == n) printf("yes\n");
    else printf("no\n");

    return 0;
}
