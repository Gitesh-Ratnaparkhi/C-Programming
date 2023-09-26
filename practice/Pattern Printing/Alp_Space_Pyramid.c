#include <stdio.h>
int main()
{
    int height;
    printf("Enter the height of the triangle : ");
    scanf("%d", &height);
    int alp = 65;
    int space = 1;
    for (int i = 1; i < height * 2; i++)
    {
        printf("%c", alp);
        alp++;
    }
    printf("\n");
    for (int i = 1; i < height; i++)
    {
        int alp2 = 65;
        for (int j = 0; j < height - i; j++)
        {
            printf("%c", alp2);
            alp2++;
        }
        for (int k = 0; k < space; k++)
        {
            printf(" ");
            alp2++;
        }
        for (int j = i; j < height; j++)
        {
            printf("%c", alp2);
            alp2++;
        }
        space = space + 2;
        printf("\n");
    }
    return 0;
}
