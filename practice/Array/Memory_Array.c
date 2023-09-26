#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    printf("%p\n",&arr[3]);
    return 0;
}