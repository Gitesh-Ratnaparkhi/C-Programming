#include<stdio.h>
void reverse(int arr[], int num1 , int num2){
    for (int i = num1 , j=num2; i < j; i++ , j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array : ");
    for(int i = 0; i<size ; i++)scanf("%d",&arr[i]);
    reverse(arr , 1 , 4);
    for(int i = 0; i<size ; i++)printf("%d ",arr[i]);       
    return 0;
}