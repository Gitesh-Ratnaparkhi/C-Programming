#include<stdio.h>
int main(){
    int a = 35;
    int *x = a;
    int ** y = x;
    printf("%d \n",a);
    printf("%d \n",x);
    printf("%d \n",y);
    return 0;
}