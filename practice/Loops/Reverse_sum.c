#include<stdio.h>
int main(){
    int num;
    printf("Enter the number whose sum you have to find : ");
    scanf("%d",&num);
    int reverse = 0;
    int sum = 0;
    while(num!=0){
        reverse =(reverse*10)+num%10;
        sum = sum+(num%10);
        num=num/10;
    }
    printf("The reverse is : %d \n",reverse);
    printf("The sum of the given number is : %d",sum);
    return 0;
}

// Dry run 
// num  12345
// 1st itration 
// reverse = 5
// sum = 5
// num = 1234

// 2nd itration 
// reverse = 54
// sum = 9
// num = 123

// 3rd itration 
// reverse = 543
// sum = 12
// num = 12

// 4th itration 
// reverse = 5432
// sum = 14
// num = 1

// 5th itration 
// reverse = 54321
// sum = 15
// num = 0

