#include <stdio.h>

int fibbonacci(int n) {
   if(n == 0){
      return 0;
   } else if(n == 1) {
      return 1;
   } else {
      return (fibbonacci(n-1) + fibbonacci(n-2));
   }
}

int shumaFibbonacci(int n, int fibbonacci(int)){
    if (n == 0){
        return 0;
    }else{
    return fibbonacci(n-1) + shumaFibbonacci(n-1, fibbonacci);
    }
}

int main() {

    int n;

    printf("Vendos numrin e elementeve: ");
    scanf("%d",&n);

        printf("Shuma e numrave te fibonaccit deri ne %d: %d\n", n, shumaFibbonacci(n,fibbonacci));

   return 0;
}
