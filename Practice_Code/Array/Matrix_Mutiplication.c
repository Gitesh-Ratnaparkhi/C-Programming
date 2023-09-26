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
    int row1 ;
    int column1;
    printf("Enter the number of rows of seccond matrix : ");
    scanf("%d",&row1);
    printf("Enter the number of columns of second matrix : ");
    scanf("%d",&column1);
    int array2[row1][column1];
    printf("Enter elements of matrix : ");
    for(int i = 0; i<row1 ; i++){
        for(int j = 0; j < column1 ; j++){
        scanf("%d",&array2[i][j]);    
        }
    }
    int ans[row][column1];
    for(int i = 0; i < row ; i++){
        for(int j = 0; j < column1 ; j++){
            ans[row][column1] += array[i][j] * array2[j][i];
        }
    }
    printf("Matrix after transpose : \n");
    for(int i = 0; i < row ; i++){
        for(int j = 0; j < column1 ; j++){
            printf("%d ", ans[i][j]);  
        }
        printf("\n");
    }
    return 0;
}