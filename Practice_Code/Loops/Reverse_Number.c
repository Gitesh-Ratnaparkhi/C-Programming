#include<stdio.h>
int main(){
    int num ;
    printf("Enter the number whose reverse you have to find : ");
    scanf("%d",&num);
    int reverse = 0;
    while(num != 0){
        reverse = (reverse*10)+num%10;
        num=num/10;
    }
    printf("The reverse number is %d ",reverse);
    return 0;
}