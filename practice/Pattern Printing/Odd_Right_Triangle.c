#include<stdio.h>
int main(){
    int height;
    printf("Enter the height of the triangle : ");
    scanf("%d",&height);
    for (int i = 1; i <= height; i++){
        int a=1;
        for (int j = 1; j <=i; j++){
            printf("%d",a);
            a=a+2;
        }
        printf("\n");
    }
    return 0;
}