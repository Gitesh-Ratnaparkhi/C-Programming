#include<stdio.h>
int main(){
    int num;
    printf("Enter the number till that you want to find sum : ");
    scanf("%d",&num);
    int sum =0;
    int num1 = 1;
    int num2 = 1;
    for (int i = 1; i <= num - 2; i++){
        sum = num1+num2;
        num1 = num2;
        num2 = sum;
    }
    printf("The sum of n number is : %d",sum);
    return 0;
}

// Note in loop we will minus end condition by 2 because in computer it start from 1 but in real it start from 0