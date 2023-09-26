#include<stdio.h>
void sum(int num1 , int total){
    if(num1 == 0){
    printf("The sum is %d",total);
    return ;
    }
    sum(num1 - 1 , total + num1);
}
int main(){
    int num;
    printf("Enter the number whose sum you have to find : ");
    scanf("%d",&num);
    int total = 0;
    sum(num , total);
    return 0;

}