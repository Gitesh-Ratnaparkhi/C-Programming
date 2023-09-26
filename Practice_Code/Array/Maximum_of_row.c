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
    int maxcount = 0;
    int max_index = -1;
    for(int i = 0; i < row ; i++){
        int count = 0;
        for(int j = 0; j < column ; j++){
            if(array[i][j] == 1)count++;
        }
        if(maxcount < count){
            maxcount = count ;
            max_index = i;
        }
    }
    printf(" Max count of the row is %d \n",maxcount);
    printf(" Max count row number is %d \n",max_index);
    return 0;
}