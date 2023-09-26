#include<stdio.h>
int main(){
    int height;
    printf("Enter the height of the triangle : ");
    scanf("%d",&height);
    int a ;
    for (int i = 1; i <= height; i++){
        for (int j = 1; j <=i; j++){
            if((i+j)%2 ==0)printf("1");
            else printf("0");
        }
        printf("\n");
    }
    return 0;
}