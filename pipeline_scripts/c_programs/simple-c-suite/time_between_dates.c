#include <stdio.h>

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

int main(void) {
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
    return 0;
}
