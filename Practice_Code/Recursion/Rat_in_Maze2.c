#include<stdio.h>
int maze2(int rows , int columns){
    int right_way = 0;
    int down_way = 0;
    if(rows ==1 && columns == 1){
        return 1;
    }
    if(rows == 1)right_way += maze2(rows , columns-1);
    if(columns == 1)down_way += maze2(rows -1 , columns);
    if(rows>1 && columns > 1){
        right_way += maze2(rows , columns-1);
        down_way += maze2(rows -1 , columns);
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
    printf("Number of ways are : %d",maze2(rows , columns));
    return 0;
}