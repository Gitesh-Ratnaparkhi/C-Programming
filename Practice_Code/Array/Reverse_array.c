#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements : ");
    for(int i = 0; i<size ; i++)scanf("%d",&array[i]);
    for(int i = 0; i<size ; i++)printf("%d ",array[i]);   
    printf("\n");
    printf("Reverse array is : \n");
    for(int i = size -1- ; i >= 0; i--)printf("%d ",array[i]);       
    return 0;
}