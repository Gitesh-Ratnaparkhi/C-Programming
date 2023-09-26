#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements : ");
    for(int i = 0; i<size ; i++)scanf("%d",&array[i]);
    int num_1;
    printf("Enter the number which you want to check : ");
    scanf("%d",&num_1);
    int count = 0;
    for(int i = 0; i<size ; i++){
        if(array[i]>num_1)count++;
    }    
    printf("Number of greatest element is : %d",count)  ;
    return 0;
}