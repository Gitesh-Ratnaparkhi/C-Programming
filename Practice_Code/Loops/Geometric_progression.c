#include<stdio.h>
int main(){
int num ;
printf("Enter the number : ");
scanf("%d",&num);
int gp = 1;
for (int i = 1; i <= num; i++){
    printf("%d \n",gp);
    gp*=2;
}

return 0;
}