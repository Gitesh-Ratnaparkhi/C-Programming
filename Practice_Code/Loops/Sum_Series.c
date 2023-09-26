#include<stdio.h>
int main(){
    int num ;
    printf("Enter the number up till which you have to print the sum : ");
    scanf("%d",&num);
    int sum = 0;
    for (int i = 0; i <= num; i++){
        if (i%2!=0) sum=sum+i;
        else sum=sum-i;
    }
    printf("The sum is %d \n",sum);
    return 0;
}


