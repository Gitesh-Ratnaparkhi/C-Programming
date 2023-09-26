#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements : ");
    for(int i = 0; i<size ; i++)scanf("%d",&array[i]);
    for(int i = 0; i<size ; i++){
        for(int j = i+1; j<size ; j++){
            if(array[i] == array[j])
            {
                printf("The index of Duplicate element is %d , %d\n",i , j);  
                break;
            }
        }
    }    
    return 0;
}