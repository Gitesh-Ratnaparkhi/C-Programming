#include<stdio.h>
int main(){
    int size ;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array : \n");
    int sum = 0;
    for(int i = 0;i < size ;i++){
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("%d",sum);
    return 0;
}