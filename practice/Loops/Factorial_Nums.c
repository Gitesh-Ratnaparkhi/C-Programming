#include<stdio.h>
int main(){
    int num;
    printf("Enter the number till that you have to print the factorial : ");
    scanf("%d",&num);
    int fact = 1;
    for (int i = 1; i <= num; i++){
        fact = fact*i;
        printf("The factorial of %d is : %d \n",i,fact);
    }
    return 0;
}