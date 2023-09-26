#include <stdio.h>
int main()
{
    int height;
    printf("Enter the height of the triangle : ");
    scanf("%d", &height);

    for (int i = 1; i <= (height * 2)+1; i++)
    {
        printf("%d", i);
    }
    printf("\n");
    int space = 1;
    for (int i = 0; i < height; i++)
    {
        int a = 1;
        for (int j = 0; j < height - i; j++)
        {
            printf("%d", a);
            a++;
        }
        for (int k = 0; k < space; k++)
        {
            printf(" ");
            a++;
        }
        for (int l = i; l < height; l++)
        {
            printf("%d", a);
            a++;
        }
        space = space + 2;
        printf("\n");
    }
    return 0;
}