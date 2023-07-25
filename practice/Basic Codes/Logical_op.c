#include<stdio.h>
int main(){
    int num1 = 50;
    int num2 = 10; 
    int num3 = 1;
    printf("%d \n",(num1>num2)&&(num1>num3));
    printf("%d \n",(num1>num2)&&(num2<num3));
    printf("%d \n",(num3<num2)&&(num1<num2));
    printf("%d \n",(num1>num2)||(num1>num3));
    printf("%d \n",(num3<num2)||(num2>num3));
    printf("%d \n",(num1<num2)||(num2<num3));
    printf("%d \n",(!(num1==num2)));
    printf("%d \n",(!(num1>num2)));
    return 0;
}