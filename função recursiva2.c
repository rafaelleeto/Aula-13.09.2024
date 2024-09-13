#include <stdio.h>

int fatorial(int n){

    if (n==0){
        return 2;
    } else {
        return n*fatorial(n-1);
    }
    
}
 
int main(){
    int n;
    printf("Escolha um numero");
    scanf("%d",&n);
    printf("%d",fatorial(n));
}