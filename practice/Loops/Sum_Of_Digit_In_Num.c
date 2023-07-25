// Find the Sum of the digits in a given number n .
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number to find the sum : ");
    scanf("%d",&num);
    int sum = 0;
    while(num > 0){
        sum += num % 10;
        num /= 10;
    }
    printf("The sum of digits in the given number is : %d",sum);
    return 0;
}