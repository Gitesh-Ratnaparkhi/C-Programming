#include<stdio.h>
int pow1(int num1 , int num2){
    if(num2 <= 1)return num1;
    int ans = pow1(num1 ,num2/2);
    if(num2%2==0){
        return ans*ans;
    }
    else{
        return ans * ans * num1;
    }
}
int main(){
    int num1 ;
    printf("Enter the number : ");
    scanf("%d",&num1);
     int num2 ;
    printf("Enter the power : ");
    scanf("%d",&num2);
    int num = pow1(num1 , num2);
    printf("The power of the given number is %d",num);
    return 0;
}