#include<stdio.h>
void pre_in_post(int num1){
    if(num1==0) return;
    printf("pre %d\n",num1);
    pre_in_post(num1-1);
    printf("In %d\n",num1);
    pre_in_post(num1-1);
    printf("Post %d \n",num1);

}
int main(){
    int num;
    printf("Enter the numbber : ");
    scanf("%d",&num);
    pre_in_post(num);
}