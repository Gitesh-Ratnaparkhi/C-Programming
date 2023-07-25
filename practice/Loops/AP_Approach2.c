#include<stdio.h>
int main(){
int num ;
printf("Enter the number : ");
scanf("%d",&num);
int num1= 1;
for(int i = 1; i <= num; i++){
    printf("%d \n",num1);
    num1+=2;
}
return 0;
}