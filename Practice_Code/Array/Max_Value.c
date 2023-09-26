#include<stdio.h>
#include<limits.h>
int main(){
    int size ;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array : \n");
    int min = INT_MIN;
    for(int i = 0;i < size ;i++){
        scanf("%d",&arr[i]);
        if(arr[i] > min)min = arr[i];
    }
    printf("The greatest element is  %d",min);
    return 0;
}