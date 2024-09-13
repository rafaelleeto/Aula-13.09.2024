#include <stdio.h>

int fatorial(int n){
 int i=1;

    if (n==0){
        return 1;
    } else {
        return fatorial(n*i++);
    } 

    
}
 
int main(){
    int n;
    printf("Escolha um numero");
    scanf("%d",&n);
    printf("%d",fatorial(n));
}