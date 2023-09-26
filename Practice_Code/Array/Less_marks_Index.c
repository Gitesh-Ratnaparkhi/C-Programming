#include<stdio.h>
int main(){
    int size ;
    printf("Enter total number of roll Numbers : ");
    scanf("%d",&size);
    int arr[size] ;
    printf("Enter the marks : ");
    for(int i = 0; i<size ; i++)scanf("%d",&arr[i]);
    printf("The roll number less than 35 are : \n");
    for(int i = 0; i<size ; i++){
        if(arr[i] < 35)printf("%d ",arr[i]);
    }
    return 0;
}