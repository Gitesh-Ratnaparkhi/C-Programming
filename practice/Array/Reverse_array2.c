#include<stdio.h>
void Reverse_IN_Place(int arr[],int size){
    int i = 0;
    int j = size-1;
    while(i < j){
        int temp =  arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }return ;
}
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements : ");
    for(int i = 0; i<size ; i++)scanf("%d",&array[i]);  
    printf("Array before reversing : ");
    for(int i = 0; i<size ; i++)printf("%d ",array[i]);
    printf("\n");
    Reverse_IN_Place(array , size);
    printf("Array after reversing : ");
    for(int i = 0; i<size ; i++)printf("%d ",array[i]);
    return 0;
}