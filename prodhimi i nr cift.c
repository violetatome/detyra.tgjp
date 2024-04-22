#include<stdio.h>

int prodhimiNrCift(int n){
    if(n == 0) {
        return 1;
    }
    return (2*n)*prodhimiNrCift(n-1);
}

int main(){

    int n;

    printf("Vendosni nje numer natyror me te madh se 0:\n");
    scanf("%d", &n);


    if (n<0){
        printf("Ju lutem vendosni nje numer pozitiv.");
    }


    int r = prodhimiNrCift(n);
    printf("Prodhimi i %d numrave te pare cift eshte: %d",n,r);

    return 0;
}
