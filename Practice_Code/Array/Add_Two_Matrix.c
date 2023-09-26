#include<stdio.h>
int main(){
    int row ;
    int column;
    printf("Enter the number of rows : ");
    scanf("%d",&row);
    printf("Enter the number of columns : ");
    scanf("%d",&column);
    int array[row][column];
    printf("Enter elements of matrix 1 : ");
    for(int i = 0; i<row ; i++){
        for(int j = 0; j < column ; j++){
        scanf("%d",&array[i][j]);    
        }
    }
    int array2[row][column];
    printf("Enter elements of matrix 2 : ");
    for(int i = 0; i<row ; i++){
        for(int j = 0; j < column ; j++){
        scanf("%d",&array2[i][j]); 
       }
    }
    int ansMatrix[row][column];
    for(int i = 0; i < row ; i++){
        for(int j = 0; j < column ; j++){
            ansMatrix[i][j] = array[i][j] + array2[i][j];  
        }
    }
    // printing op
    printf("The sum is \n");  
    for(int i = 0; i < row ; i++){
        for(int j = 0; j < column ; j++){
            printf("%d ", ansMatrix[i][j]);  
        }
        printf("\n");
    }
    return 0;
}