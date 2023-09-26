#include<stdio.h>
int main(){
     int height;
    printf("Enter the height of the triangle : ");
    scanf("%d",&height);
    for (int i = 1; i <= height; i++){
        for (int j = 1; j <= height; j++){
            if (i == j || i+j == height+1)
            {
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
