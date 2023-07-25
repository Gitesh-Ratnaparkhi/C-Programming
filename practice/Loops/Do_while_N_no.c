#include<stdio.h>
int main(){
    int num1 = 0;
    int num;
    printf("Enter the limit ");
    scanf("%d",&num);
    do{
        printf("%d\n",num1);
        num1++;
    }
    while(num1 <= num);
    return 0;
}