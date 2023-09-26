#include<stdio.h>
int main(){
    int side;
    printf("Enter the side of the square : ");
    scanf("%d",&side);
    
    for (int i = 1; i <= side; i++){
        int a=1;
        for (int j = 1; j <=side; j++){
            printf("%d",a);
            a=a+2;
        }
        printf("\n");
    }
    return 0;
}