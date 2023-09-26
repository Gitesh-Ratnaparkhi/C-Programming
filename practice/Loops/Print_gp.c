#include<stdio.h>
int main(){
    int num;
    printf("enter the number fom which you have to print gp ");
    scanf("%d",&num);
for(int i = 1; num > 0; i++){
    printf("%d \n",num);
    num=num /2;
}
return 0;
}