#include<stdio.h>
#include<math.h>
int main(){
    int num1 ;
    printf("Enter the number whose sqrt you have to find : ");
    scanf("%d",&num1);
    int num = sqrt(num1);
    printf("The square root of the entered number is %d",num);
    return 0;
}