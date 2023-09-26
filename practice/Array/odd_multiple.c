#include<stdio.h>
int main(){
    int size ;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of the array : \n");
    for(int i = 0;i < size ;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)arr[i]*=2;
        else arr[i] += 10;
    }
     for(int i = 0;i < size ;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}