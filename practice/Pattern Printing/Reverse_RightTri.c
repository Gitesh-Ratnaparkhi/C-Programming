#include <stdio.h>
int main()
{
    int height;
    printf("Enter the height of the triangle : ");
    scanf("%d", &height);
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < i; j++)
            printf(" ");
        for (int k = 0; k < height - i; k++)
            printf("*");
        printf("\n");
    }
    return 0;
}