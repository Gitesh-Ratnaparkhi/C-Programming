#include<stdio.h>
int one_Two_Stair(int num){
    if(num == 1)return 1;
    if(num == 2)return 2;
    if(num == 3)return 3;
    int ways = one_Two_Stair(num - 1) + one_Two_Stair(num - 2) + one_Two_Stair(num - 3);
    return ways;
}
int main(){
    int stair ;
    printf("Enter the number of stairs : ");
    scanf("%d",&stair);
    printf("The number of way are : %d",one_Two_Stair(stair));
    return 0;
}