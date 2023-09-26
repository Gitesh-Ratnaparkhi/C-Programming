#include<stdio.h>
int main(){
    int row ;
    int column = 2;
    printf("Enter the number of student : ");
    scanf("%d",&row);
    int array[row][column];
    printf("Enter the 1 roll No and marks of the student : ");
    for(int i = 0; i<row ; i++){
        for(int j = 0; j < column ; j++){
            scanf("%d",&array[i][j]);
        }
    }
    for(int i = 0; i<row ; i++){
        for(int j = 0; j < column ; j++){
            printf("%d ",array[i][j]);  
        }
    }
    return 0;
}