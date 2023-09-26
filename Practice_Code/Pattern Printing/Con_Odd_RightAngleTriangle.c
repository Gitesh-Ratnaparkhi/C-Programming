#include<stdio.h>
int main(){
    int height;
    printf("Enter the height of the triangle : ");
    scanf("%d",&height);
    int n = 1;
    for (int i = 1; i <= height; i++){
        for (int j = 1; j <=i; j++){
            printf("%d",n);
            n=n+2;
        }
        printf("\n");
    }
    return 0;
}