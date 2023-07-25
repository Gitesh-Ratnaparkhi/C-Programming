#include<stdio.h>
int main(){
    int num ;
    printf("Enter the number which you have to find weather even or odd : ");
    scanf("%d",&num);
    if(num % 2 == 0)  printf("The number is even %d",num);
    else printf("The number is odd %d",num);
    return 0;
}