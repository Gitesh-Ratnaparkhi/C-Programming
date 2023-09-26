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
       for(int j = i+1 ; j < size ; j++){
            for(int k = j+1 ; k < size ; k++){
                if(array[i]+array[j]+array[k]==inputsum){
                    total++;
                    printf("( %d , %d , %d ) \n",array[i] , array[j] , array[k]);
                }
            }
        }
    }    
    printf("The total number of pairs are : %d",total);
    return 0;
}