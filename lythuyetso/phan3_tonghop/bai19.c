#include <stdio.h>

long long giaiThua(int x) {
    long long rs = 1;
    for (int i=2;i<=x;i++)
        rs*=i;
        return rs;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld", giaiThua(n));
}