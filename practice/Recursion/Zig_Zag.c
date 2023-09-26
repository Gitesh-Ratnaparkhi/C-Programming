#include<stdio.h>
void zig_zag(int num){
    if(num == 0)return;
    printf("%d",num);
    zig_zag(num-1);
    printf("%d",num);
    zig_zag(num-1);
    printf("%d",num);
}
int main(){
    int num;
    printf("Enter the numbber : ");
    scanf("%d",&num);
    zig_zag(num);
    return 0;
}