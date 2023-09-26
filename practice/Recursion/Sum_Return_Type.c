#include<stdio.h>
int total(int num1 ){
    if(num1 == 0)return num1;
    int res = num1+total(num1 - 1);
    return res;
}
int main(){
    int num1;
    printf("Enter the number : ");
    scanf("%d",&num1);
    printf("The sum is : %d",total(num1 ));
    return 0;
}