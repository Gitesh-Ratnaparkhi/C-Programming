#include<stdio.h>
int add (int a , int b){
    return a+b;
}
int main(){
    int num1 , num2;
    printf("Enter number 1 and number 2 : ");
    scanf("%d",&num1);
    scanf("%d",&num2);

   printf("%d",add(num1 , num2));
   return 0;
}