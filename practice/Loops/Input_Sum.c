#include<stdio.h>
int main(){
    printf("Enter -1 to get the result \n");
    int sum = 0; 
    int num1;
    printf("Enter the number : ");
    scanf("%d",&num1);
    while(num1!=-1){
        sum += num1;
        printf("Enter the number : ");
        scanf("%d",&num1);
        
    }
    printf("The sum is %d",sum);
    return 0;
}