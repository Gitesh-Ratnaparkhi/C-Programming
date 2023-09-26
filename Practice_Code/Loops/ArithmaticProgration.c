#include<stdio.h>
int main(){
int num ;
printf("Enter the number : ");
scanf("%d",&num);
for(int i = 1; i <= 2*num-1 ; i=i+2){
    printf("%d \n",i);
}
return 0;
}