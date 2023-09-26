#include<stdio.h>
int main(){
    int a = 35;
    int *x = &a;
    int ** y = &x;
    printf("%p \n",&x);
    printf("%p \n",y);
    return 0;
}