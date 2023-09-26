#include<stdio.h>
int main(){
    printf("Enter the number which you want to check ");
    int num2 ;
    scanf("%d",&num2);
    if(num2 % 3 == 0 && num2 % 5 == 0) printf("The number is divisible by 3 and 5 = %d" ,num2);
    else printf("The number is not divisible 3 and 5 = %d" ,num2);
    return 0 ;
}