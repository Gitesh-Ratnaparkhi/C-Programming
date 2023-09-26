#include<stdio.h>
int main(){
int num ;
printf("Enter the number : ");
scanf("%d",&num);
for(int i = 1; i <= num ; i+2){
    printf("Hello world \n");
}
return 0;
}