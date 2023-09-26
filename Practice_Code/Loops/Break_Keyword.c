#include<stdio.h>
int main(){
    int num;
    printf("enter the number fom which you have to print gp ");
    scanf("%d",&num);
for(int i = 1; i <= num ; i++){
    if(i%2 == 0){
        printf("%d \n",i);
        printf("The loop will not run because condition satistfy so it will n ot print remaning element ");
        break;
    }
}
return 0;
}