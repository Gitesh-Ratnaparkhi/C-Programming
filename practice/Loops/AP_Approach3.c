#include<stdio.h>
int main(){
int num ;
printf("Enter the number : ");
scanf("%d",&num);
for(int i = 4; i <= 3*num+1; i=i+3){
    printf("%d \n",i);
}
return 0;
}