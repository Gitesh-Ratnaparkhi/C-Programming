#include<stdio.h>
#include<math.h>
int main(){
    int num1 ;
    printf("Enter the number : ");
    scanf("%d",&num1);
     int num2 ;
    printf("Enter the power : ");
    scanf("%d",&num2);
    int num = pow(num1 , num2);
    printf("The power of the given number id %d",num);
    return 0;
}