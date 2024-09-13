#include <stdio.h>

int fibonaci(int nu){
    if (nu==1 || nu==2)
    {
        return 1;
    }
        return fibonaci(nu - 1) + fibonaci(nu - 2);

}
int main(){
    int nu;
    printf("Digite um numero");
    scanf("%d",&nu);
    printf("%d",fibonaci(nu));

    return 0;
}
