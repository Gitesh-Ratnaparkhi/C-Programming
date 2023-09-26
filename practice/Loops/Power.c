#include<stdio.h>
int main(){
    int num , pow;
    printf("Enter the number of which power you have to find : ");
    scanf("%d",&num);
    printf("Enter the power : ");
    scanf("%d",&pow);
    int result = 1;
    for (int i = 0; i < pow; i++){
        result = result * num;
    }
    printf("The power of %d is %d",num,result);
    return 0;
}