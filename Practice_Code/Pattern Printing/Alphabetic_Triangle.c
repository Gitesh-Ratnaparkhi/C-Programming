#include<stdio.h>
int main(){
    int height;
    printf("Enter the height of the triangle : ");
    scanf("%d",&height);
    for (int i = 1; i <= height; i++){
        int a = 65;
        for (int j = 1; j <=i; j++){
            char ch = (char)a;
            printf("%c",ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}