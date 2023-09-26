#include<stdio.h>
int main(){
    int side;
    printf("Enter the side of the square : ");
    scanf("%d",&side);
    for (int i = 1; i <= side; i++){
        for (int j = 1; j <=side; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}