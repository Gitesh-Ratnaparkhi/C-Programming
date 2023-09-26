#include<stdio.h>
int main(){
    int num1 = 10;
    int num2;
    num2 = num1 ;
    printf("%d \n",num2);

    num1 += num2 ; 
    printf("%d \n",num1);

    num1 -= num2 ;
    printf("%d \n",num1);

    num1 /= num2 ;
    printf("%d \n",num1);

    num1 %= num2 ;
    printf("%d \n",num1);
}



