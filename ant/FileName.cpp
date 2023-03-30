#pragma warning(disable:4996)
#include<stdio.h>
int main() {
    long long int x, y;
    long long int a, b;
    long long int t;
    long long int n = 1, m = 1;
    scanf("%lld %lld %lld %lld %lld", &x, &y, &a, &b, &t);
    while (t != 0) {
        if (a == x) {
            n = -1;
        }
        else if (a == 0) {
            n = 1;
        }
        if (b == y) {
            m = -1;
        }
        else if (b == 0) {
            m = 1;
        }
        a = a + n;
        b = b + m;
        t--;
    }
    printf("%lld %lld", a, b);
    return 0;
}