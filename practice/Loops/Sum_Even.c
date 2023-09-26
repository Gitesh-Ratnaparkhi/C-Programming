#include <stdio.h>
int main()
{
    printf("Enter the number till that you have to print the sum : ");
    int number;
    scanf("%d", &number);
    int num1 = 0;
    int sum = 0;
    while (num1 <= number)
    {
        if (num1 % 2 == 0)
        {
            sum += num1;
        }
        num1++;
    }
    printf("The sum of n number is %d \n", sum);
    return 0;
}