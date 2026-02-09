#include <stdio.h>

int main(void) {
    unsigned int n;
    if (scanf("%u", &n) != 1) return 0;

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    char bits[64];
    int k = 0;
    while (n > 0) {
        bits[k++] = (char)('0' + (n & 1u));
        n >>= 1u;
    }
    for (int i = k - 1; i >= 0; i--) putchar(bits[i]);
    putchar('\n');
    return 0;
}
