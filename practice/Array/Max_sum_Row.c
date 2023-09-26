#include<stdio.h>
#include<limits.h>
int main(){
    int row ;
    int column;
    printf("Enter the number of rows : ");
    scanf("%d",&row);
    printf("Enter the number of columns : ");
    scanf("%d",&column);
    int array[row][column];
    printf("Enter 1 or 0 as a element of the matrix : ");
    for(int i = 0; i<row ; i++){
        for(int j = 0; j < column ; j++){
        scanf("%d",&array[i][j]);    
        }
    }
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i = 0; i < row ; i++){
        for(int j = 0; j < column ; j++){
            if(array[i][j] < min)min = array[i][j];
            if(array[i][j] > max)max = array[i][j]; 
        }
    }
    printf("The min element is %d\n",min);
    printf("The max element is %d",max);

    return 0;
}