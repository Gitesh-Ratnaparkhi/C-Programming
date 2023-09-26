#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements : ");
    for(int i = 0; i<size ; i++)scanf("%d",&array[i]);
    int odd_count = 0;
    int even_count = 0;
    for(int i = 0; i<size ; i++){
        if(array[i]%2==0)even_count+=array[i];
        else odd_count+=array[i];
    }    
    int diff = even_count - odd_count;
    printf("Difference between odd and even indices are : %d",diff)  ;
    return 0;
}