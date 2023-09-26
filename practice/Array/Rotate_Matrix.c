#include<stdio.h>
int main(){
    int n ;
    printf("Enter the number of n : ");
    scanf("%d",&n);
    int array[n][n];
    printf("Enter elements of matrix : ");
    for(int i = 0; i<n ; i++){
        for(int j = 0; j < n ; j++){
        scanf("%d",&array[i][j]);    
        }
    }
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n ; j++){
            printf("%d ", array[i][j]);  
        }
        printf("\n");
    }
    for(int i = 0; i < n ; i++){
        for(int j = i; j < n ; j++){
            int temp = array[i][j];
            array[i][j] = array[j][i];
            array[j][i] = temp;
        }
    }
    for(int i = 0; i < n ; i++){
        int j = 0;
        int k = n-1;
        while(j-k){
            int temp = array[i][j];
            array[i][j] = array[i][k];
            array[i][k] = temp;
            j++;
            k--;
        }
    }
    printf("Matrix after transpose : \n");
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n ; j++){
            printf("%d ", array[i][j]);  
        }
        printf("\n");
    }
    return 0;
}