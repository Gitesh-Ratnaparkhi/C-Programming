#include<stdio.h>
int main(){
    int arr[5]={2,3,4,5,6};
    printf("%d ",arr[0]);
    printf("%d ",arr[1]);
    printf("%d ",arr[2]);
    printf("%d ",arr[3]);
    printf("%d \n",arr[4]);
    // now we are changing the value of arr[4];
    arr[4] = 600;
    printf("Value after changing is %d \n",arr[4]);
     printf("%d ",arr[0]);
    printf("%d ",arr[1]);
    printf("%d ",arr[2]);
    printf("%d ",arr[3]);
    printf("%d \n",arr[4]);
    return 0;
}