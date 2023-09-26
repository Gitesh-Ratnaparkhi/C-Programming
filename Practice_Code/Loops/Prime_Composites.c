#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int a = 0;
    for (int i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            a = 1;
            break;
        }
    }
    if(num==1)printf("The given number is neiter prime nor composite ");
    else if (a==0) printf("The given number is prime ");
    else printf("The given number is composite ");
    return 0;
}