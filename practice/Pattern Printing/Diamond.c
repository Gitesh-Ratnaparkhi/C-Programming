#include<stdio.h>
int main(){
    int height;
    printf("Enter the height of the triangle : ");
    scanf("%d",&height);
    int star = 1;
    for (int i = 0; i < height; i++){
        for(int j = 0 ; j< height-i ; j++){
            printf(" ");
        }
        for(int k = 0 ; k < star; k++){
            printf("*");
        }
        star = star+2;
        printf("\n");
    }
    

    return 0;
}