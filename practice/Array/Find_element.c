#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements : ");
    for(int i = 0; i<size ; i++)scanf("%d",&array[i]);
    int ele;
    printf("Enter the element which you have to find : ");
    scanf("%d",&ele);
    for(int i = 0; i<size ; i++){
        if(array[i] == ele)printf("The index of the element is %d\n",i);  
    }    
    return 0;
}