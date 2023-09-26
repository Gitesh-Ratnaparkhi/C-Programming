#include<stdio.h>
int factorial(int number){
    int fact = 1;
    for(int i = 1;i <= number ;i++){
        fact = fact * i;
    }
    return fact;
}
int main(){
    int num1 , num2 ;
    printf("Enter a number : ");
    scanf("%d",&num1);
    printf("Enter the second number : ");
    scanf("%d",&num2);
    int num_fact = factorial(num1);
    int num2_fact = factorial(num2);
    int nr_fact = factorial(num1 - num2);
    int ncr =num_fact  / (nr_fact * num2_fact);
    printf("The combination is %d", ncr);
    return 0;
}