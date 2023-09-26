// print the sum of n natural number using for loop
#include<stdio.h>
int main(){
    printf("Enter the number till that you have to print the number : ");
    int number;
    scanf("%d",&number);
    int sum = 0;
    for(int i = 0; i<=number; i++) sum = sum + i;
    printf("The sum of n number is %d \n",sum);
    return 0;
}