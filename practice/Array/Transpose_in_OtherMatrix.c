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
    int array2[column][row];
    for(int i = 0; i < column ; i++){
        for(int j = 0; j < row ; j++){
            array2[i][j] = array[j][i];  
        }
    }
    printf("Matrix after transpose : \n");
    for(int i = 0; i < row ; i++){
        for(int j = 0; j < column ; j++){
            printf("%d ", array2[i][j]);  
        }
        printf("\n");
    }
    return 0;
}