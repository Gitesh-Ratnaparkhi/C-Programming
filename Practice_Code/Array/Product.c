#include<stdio.h>
int main(){
    int size ;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array : \n");
    int mul = 1;
    for(int i = 0;i < size ;i++){
        scanf("%d",&arr[i]);
        mul = mul * arr[i];
    }
    printf("The product is : %d",mul);
    return 0;
}