#include<stdio.h>
int main(){
    int num;
    printf("enter the number  ");
    scanf("%d",&num);
for(int i = 1; i <= num ; i++){
    if(i%2 == 0){
        printf("%d \n",i);
        continue;
    }
}
return 0;
}