// Demo of do while 
#include<stdio.h>
int main(){
    printf("Enter the number till that you hve to print the number : ");
    int number;
    scanf("%d",&number);
    int num1 = 0;
    do{ 
        printf(" %d \n",num1) ;
        num1++;
    }
    while(num1 <= number);
    return 0;
}