#include<stdio.h>
#include<stdbool.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements : ");
    for(int i = 0; i<size ; i++)scanf("%d",&array[i]);
    int ceck_ele;
    printf("Enter the element to check : ");
    scanf("%d",&ceck_ele);
    bool flag = false;
    for(int i = 0; i<size ; i++){
        if(array[i] == ceck_ele){
            flag = true;
        }
    } 
    if(flag == false)printf("%d Element is not present",ceck_ele);        
    else printf("%d Element is present",ceck_ele);
    return 0;
}