#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;

    if (n % 2 == 0) printf("False\n");
    else printf("True\n");

    return 0;
}
