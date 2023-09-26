#include<stdio.h>
int main(){
    printf("Enter the number from which you have to print the number ");
    int number;
    scanf("%d",&number);
    for(int i = number; i >= 0; i--) printf("%d \n",i);
    return 0;
}
