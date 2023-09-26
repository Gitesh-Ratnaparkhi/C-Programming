#include<stdio.h>
int main(){
     int height;
    printf("Enter the height of the triangle : ");
    scanf("%d",&height);
    for (int i = 1; i <= height; i++){
        for (int j = 1; j <= height; j++){
            int num = (height/2)+1;
            if (j == num || i == num)
            {
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}

// given height = 5
// for 1st itration of i --> 
//     1st itrattion of j --> 1 condition not match print (" ")
//     2nd 