#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements : ");
    for(int i = 0; i<size ; i++)scanf("%d",&array[i]);
    int total = 0;
    int inputsum ;
    printf("Enter the sum which you want to check : ");
    scanf("%d",&inputsum);
    for(int i = 0; i<size ; i++){
       for(int j = 1+1 ; j < size ; j++){
        if(array[i]+array[j]==inputsum){
            total++;
            printf("( %d , %d) \n",array[i] , array[j]);
        }
       }
    }    
    printf("The total number of pairs are : %d",total);
    return 0;
}