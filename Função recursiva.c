#include <stdio.h>

int fatorial(int n ){
    int res=1;
    for (int i=n;i>1;i--){
        res*=i;
    }
    return res;
}

int main( ){
    int n;
    printf("digite um numero: ");
    scanf ("%i",&n);
    printf("%d",fatorial(n));

    return 0;
}   