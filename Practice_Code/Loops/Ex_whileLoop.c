#include<stdio.h>
int main(){
    printf("Enter the number till that you hve to print the number : ");
    int number;
    scanf("%d",&number);
    int number1 = 0;
    while(number1 <= number) printf("%d \n",number1), number1++;
    return 0;
}