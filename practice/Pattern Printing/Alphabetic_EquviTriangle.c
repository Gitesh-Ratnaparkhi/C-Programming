#include<stdio.h>
int main(){
    int height;
    printf("Enter the height of the triangle : ");
    scanf("%d",&height);
    int tem = 1;
    for(int i = 1; i<= height ;i++){
        int star = 65;
        for(int j = 1; j<=height-i;j++){
            printf(" ");
        }
        for (int k = 1; k<=tem ; k++){
            printf("%c",star);
            star = star+1;
        }
        tem = tem + 2;
        printf("\n");
    }
    return 0;
}