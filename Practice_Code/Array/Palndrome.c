#include<stdio.h>
#include<stdbool.h>
bool Palindrome(int arr[],int size){
    int i = 0;
    int j = size-1;
    bool check = false;
    while(i < j){
        if(arr[i] == arr[j]) check = true;
        i++;
        j--;
    }
    return check;
}
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the elements : ");
    for(int i = 0; i<size ; i++)scanf("%d",&array[i]);  
    printf("If Output is 1 then array is a palindrome and 0 means not a palingrome : %d ", Palindrome(array , size));
    return 0;
}