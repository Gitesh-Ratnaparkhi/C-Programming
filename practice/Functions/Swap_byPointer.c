#include<stdio.h>
void swap(int *x , int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a = 2;
    int b = 3;
    printf("%d a , %d b \n",a,b);
    swap(&a , &b);
    printf("%d a , %d b",a,b);
    return 0;
}