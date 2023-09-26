#include<stdio.h>
void print_Num(int num1){
    if(num1 == 0 )return;
    print_Num(num1-1);
    printf("%d\n",num1);  
}
void print_Num2(int num1){
    if(num1 == 0 )return;
    printf("%d\n",num1);  
    print_Num2(num1-1);
}
int main(){
    int num ;
    printf("Enter the number from which you have to print the number : ");
    scanf("%d",&num);
    print_Num(num);
    printf("The reverse of that number is : ")
    print_Num2(num);
    return 0;
}