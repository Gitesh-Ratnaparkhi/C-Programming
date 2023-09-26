#include<stdio.h>
int main(){
    int length , breadth;
    printf("Enter the length of the rectangle : ");
    scanf("%d",&length);
    printf("Enter the breadth of the rectangle : ");
    scanf("%d",&breadth);
    for (int i = 1; i <= breadth; i++){
        for (int j = 1; j <= length; j++){
            if(i==1 || j == length || j==1 || i==breadth)printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}