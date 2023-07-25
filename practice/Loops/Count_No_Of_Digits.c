// Count the number of digits for a number n .
#include<stdio.h>
int main(){
    int num ;
    printf("Enter the number : ");
    scanf("%d",&num);
    int sum = 0; 
    while(num > 0){ 
        num = num / 10;
        sum++;
    }
    printf("The number of digit in the given number is %d",sum);
    return 0;
}
