#include<stdio.h>
int main(){
    int num1 ;
    int sum , mul , sub , divi ;
    printf("Enter the number 1 = ");
    scanf("%d",&num1);
    int num2 ;
    printf("Enter the number 2 = ");
    scanf("%d",&num2);
    sum = num1 + num2;
    mul = num1 * num2;
    sub = num1 - num2;
    divi = num1 / num2;
    printf(" sum = %d \n multiplication = %d \n subtraction = %d \n divisoin = %d",sum,mul,sub,divi);
    return 0;
}