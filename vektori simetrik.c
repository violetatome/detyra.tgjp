#include<stdio.h>

int eshteSimetrik(int v[], int n); /* prototipi i funksionit */

int main( void )
{
    int x;
    int a[ 11 ] = { 10,9,8,7,6,5,6,7,8,9,10 };
    x = eshteSimetrik(a, 11);
    printf( "Vektori simetrik ose jo: %d\n", x );
    printf( "\n" );
    return 0;
}


int eshteSimetrik(int v[], int n){
    if (n <= 1){
        return 1; //true
    }
    if (v[0] == v[n-1]){
          return eshteSimetrik(v+1, n-2);
    } else {
    	return 0; //false
	}

}


