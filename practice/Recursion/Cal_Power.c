#include<stdio.h>
int power(int num , int pow){
    if(pow == 1)return num;
    int res = num;
    res *=power(num , pow -1);
    return res;
}
int main(){
    int num ;
    printf("Enter the number whose power you have to find : ");
    scanf("%d",&num);
    int num1 ;
    printf("Enter the power : ");
    scanf("%d",&num1);
    int x = power(num , num1);
    printf("The power is %d",x);
    return 0;
}