#include<stdio.h>
int factorial(int num){
    if(num == 1)return 1;
    return factorial(num-1)*num;
}
int main(){
    int num1 ;
    printf("Enter the number whose factorial you have to find : ");
    scanf("%d",&num1);
    int result = factorial(num1);
    printf("The factorial of the given number is %d",result);
    return 0;
}