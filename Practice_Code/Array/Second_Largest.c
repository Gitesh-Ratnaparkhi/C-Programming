#include<stdio.h>
#include<limits.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements : ");
    for(int i = 0; i<size ; i++)scanf("%d",&array[i]);
    int First_max = INT_MIN;
    int second_max = INT_MIN;
    for(int i = 0 ; i< size ; i++){
        if(array[i] > First_max) {
            First_max = array[i];
        }
    }
     for(int i = 0 ; i< size ; i++){
        if(array[i] > second_max && array[i]!= First_max) {
            second_max = array[i];
        }
    }
    printf("The second largest element is : %d",second_max);
    return 0;
}