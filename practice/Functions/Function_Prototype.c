#include <stdio.h>
int main()
{
    void india();
    india();
    return 0;
}
void india()
{
    printf("You are in India\n");
    void australia();
    australia();
}

void australia()
{
    printf("You are in australia\n");
    void england();
    england();
}

void england()
{
    printf("You are in england \n");
}