#include<stdio.h>
#include<stdbool.h>
bool Repeated(int array[], int size , int ele){
    bool result = false;
    for(int i = 0; i<size ; i++){
        if(array[i]==ele){
            result = true;
        }
        else result = false;
    }
    return result;
}
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements : ");
    for(int i = 0; i<size ; i++)scanf("%d",&array[i]);
    int ele;
    printf("Enter the element which you have to find in the given array : ");
    scanf("%d",&ele);
    bool result = Repeated(array, size, ele);
    if(result == true)printf("Element is present : %d",result);
    else printf("Element is not present : %d",result);
    return 0;
}