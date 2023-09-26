#include <stdio.h>
int main()
{
    int height;
    printf("Enter the height of the triangle : ");
    scanf("%d", &height);
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= height - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        int a = i-1;
        for (int q = 1; q <= i - 1; q++)
        {
            printf("%d", a);
            a--;
        }
        printf("\n");
    }
    return 0;
}