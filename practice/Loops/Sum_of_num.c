// print the sum of n numbers
#include<stdio.h>
int main(){
    printf("Enter the number till that you hve to print the number : ");
    int number;
    scanf("%d",&number);
    int num1 = 0;
    int sum = 0;
    while(num1 <= number) sum += num1 , num1++;
     printf("The sum of n number is %d \n",sum);
    return 0;
}