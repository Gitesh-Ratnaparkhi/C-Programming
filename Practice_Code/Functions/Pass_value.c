#include<stdio.h>
void swap(int *x , int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int num1 , num2;
    printf("Enter the number 1 : ");
    scanf("%d",&num1);
    printf("Enter the number 2 : ");
    scanf("%d",&num2);
    printf("The number before swaping is : %d = num1 and %d = num2 \n",num1 , num2);
    swap(&num1 , &num2);
    printf("The number after swaping is : %d = num1 and %d = num2 \n",num1 , num2);
    return 0;
}