#include<stdio.h>
void england(){
    printf("You are in england \n");
}
void australia(){
    printf("You are in australia\n");
    england();
}
void india(){
printf("You are in India\n");
    australia();
}
int main(){
    india();
    return 0;
}