#include<stdio.h>
#include<stdbool.h>
int main(){
    int num1 = 56;
    float num2 = 89.89;
    char num3 = 'c';
    bool num4 = true;
    double num5 = 74949;
    long num6 = 7820;
    short num7 = 9387;
    printf("the int number is %d \n",num1);
    printf("the float number is %f \n",num2);
    printf("the character is %c \n",num3);
    printf("the boolean is %d \n",num4);
    // Note in c boolean will always printed as 1 and 0 where 1 stand for true and 0 for false .
    printf("the double number is %f \n",num5);
    printf("the long number is %ld \n",num6);
    printf("the short number is %d \n",num7);
    return 0;
} 