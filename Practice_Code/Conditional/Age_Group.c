#include<stdio.h>
int main(){
    int age ;
    printf("Enter the your age : ");
    scanf("%d",&age);
    if(age > 0 && age <= 12)  printf("You are a child %d",age);
    else if(age > 12 && age <= 18) printf("You are a teenagere %d",age);
    else if(age > 18) printf("You are a Adult %d",age);
    else printf("Enter the valid age ");
    return 0;
}