#include<stdio.h>
int fibonacci(int num1){
    if(num1 == 1 || num1 == 2)return 1;
    return fibonacci(num1 - 1) + fibonacci(num1 - 2);
}
int main(){
    int num;
    printf("Enter the number till that you have to print the number : ");
    scanf("%d",&num);
    printf("%d",fibonacci(num));
    return 0;
}