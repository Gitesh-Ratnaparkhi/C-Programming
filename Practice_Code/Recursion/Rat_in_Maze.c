#include<stdio.h>
int maze(int num1 , int num2 , int rows , int columns){
    int right_way = 0;
    int down_way = 0;

    if(num1 == rows && num2 == columns){
        return 1;
    }
    if(num1 == rows){
        right_way += maze(num1 , num2 + 1 , rows , columns);
    }
    if(num2 == columns){
        down_way += maze(num1+1 , num2 , rows , columns);
    }
    if(num1 < rows && num2 < columns){
        right_way += maze(num1 , num2 + 1 ,rows , columns);
        down_way += maze(num1 + 1 , num2 , rows , columns);
    }
    int total_ways = right_way + down_way;
    return total_ways;   
}
int main(){
    int rows , columns;
    printf("Enter the number of rows : ");
    scanf("%d",&rows);
    printf("Enter the number of cloums : ");
    scanf("%d",&columns);
    printf("Number of ways are : %d",maze(1 , 1 , rows , columns));
    return 0;
}