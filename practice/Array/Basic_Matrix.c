#include<stdio.h>
int main(){
    int row ;
    int column;
    printf("Enter the number of rows : ");
    scanf("%d",&row);
    printf("Enter the number of columns : ");
    scanf("%d",&column);
    int array[row][column];
    printf("Enter elements of matrix : ");
    for(int i = 0; i<row ; i++){
        for(int j = 0; j < column ; j++){
        scanf("%d",&array[i][j]);    
        }
    }
    for(int i = 0; i < row ; i++){
        for(int j = 0; j < column ; j++){
            printf("%d ", array[i][j]);  
        }
        printf("\n");
    }
    return 0;
}