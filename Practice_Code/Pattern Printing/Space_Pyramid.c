#include <stdio.h>
int main()
{
    int height;
    printf("Enter the height of the triangle : ");
    scanf("%d", &height);
    int space = 1;
    for (int x = 0; x <= height*2; x++)
    {
        printf("*");
    }
    printf("\n");
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height - i; j++)
        {
            printf("*");
        }
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }
        for (int l = i; l < height; l++)
        {
            printf("*");
        }
        space = space + 2;
        printf("\n");
    }
    return 0;
}