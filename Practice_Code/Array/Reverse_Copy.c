#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int array[size];
    int ans_arr[size];
    printf("Enter the elements : ");
    for(int i = 0; i<size ; i++)scanf("%d",&array[i]);
    printf("Array before reversing : ");
    for(int i = 0; i<size ; i++)printf("%d ",array[i]);
    printf("\n");
    for(int i = 0; i <= size ; i++){
        ans_arr[size-i] = array[i-1];
        }
    printf("Array after reversing : ");
    for(int i = 0; i<size ; i++)printf("%d ",ans_arr[i]);       
    return 0;
}