#include<stdio.h>
int main(){
    printf("Enter the number : ");
    int num1 ;
    scanf("%d",&num1);
    int res;
    res = (num1 % 2 == 0)? 1 : 0 ;
    printf("The number is 1 means even and 0 means odd = %d",res);
    return 0 ;
}