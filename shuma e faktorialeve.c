#include<stdio.h>

int faktorial(int n);

int shumaEFakt(int faktorial(int), int n) {
    if (n == 0) {
        return 0;
    } else {
        return faktorial(n) + shumaEFakt(faktorial, n - 1);
    }
}

int faktorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int n;
    printf("Shkruaj nje numer natyror:\n");
    scanf("%d", &n);

    printf("Shuma e %d faktorialeve te pare eshte: %d\n", n, shumaEFakt(faktorial, n));
    return 0;
}

