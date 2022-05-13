#include <stdio.h>

int isPrime(int x) {
    for (int i= 2;i *i<=x;i++) {
        if (x%i==0) return 0;
    }
    return x>1;
}

int main (){
    int n;
    scanf("%d", &n);
    printf("%d", isPrime(n));
}