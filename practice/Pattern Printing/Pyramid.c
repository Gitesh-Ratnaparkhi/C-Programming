#include<stdio.h>
int main(){
    int num ;
    printf("Enter the height of the Pyramid : ");
    scanf("%d",&num);
    int star = 1;
    for(int i = 1 ; i<= num; i++){
        for(int j = 1; j<= num-i;j++){
            printf(" ");
        }
        for(int j = 1; j<= star;j++){
            printf("*");
        }
        star = star + 2;
        printf("\n");
    }
    return 0;
}