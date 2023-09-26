#include<stdio.h>
void print_Num(int num1){
    if(num1 == 0 )return;
    print_Num(num1-1);
    printf("%d\n",num1);
}
int main(){
    int num ;
    printf("Enter the number from which you have to print the number : ");
    scanf("%d",&num);
    print_Num(num);
    return 0;
}
// 6 
// 5
// 4 
// 3
// 2
// 1
// 0 condition check if true then return 
// 