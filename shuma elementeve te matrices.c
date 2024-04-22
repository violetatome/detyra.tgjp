#include<stdio.h>

int shumaEMatrices(int matrica[][3], int n, int m);/*prototipi i funksionit*/


int shumaERreshtit(int m) {
  if (m==0){
    return 0;
  }

  return m + shumaERreshtit(m-1);
}

int main (void)
{
    int x;
    int a[4][3] = {
    {1,2,3},
    {1,2,3},
    {1,2,3},
    {1,2,3},
    };
    x = shumaEMatrices(a,4,3);
    printf("Shuma e matrices eshte: %d\n", x);
return 0;
}


 int shumaEMatrices(int matrica[][3], int n, int m){
    if (n == 0) {
    return 0;
    }

    return shumaERreshtit(m) + shumaEMatrices(matrica, n-1 , m);
 }
