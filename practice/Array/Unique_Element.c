#include<stdio.h>
#include<stdbool.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements : ");
    for(int i = 0; i<size ; i++)scanf("%d",&array[i]);
    for(int i = 0; i<size ; i++){
        bool flag = false;
        for(int j = i+1; j<size ; j++){
            if(array[i] == array[j])
            {
                flag = true;
            }
        }
        if(flag == false){
            printf("The Element is %d",array[i]);
            break;
        }
    }    
    return 0;
}