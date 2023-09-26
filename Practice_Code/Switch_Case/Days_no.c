// Write a program to print the day based in the day number .

#include<stdio.h>
int main(){
    printf("Enter day number ");
    int day ;
    scanf("%d",&day);
    switch(day){
        case 1:
            printf(" The day is Monday ");
        break;
        case 2:
            printf(" The day is Tuesday ");
        break;
        case 3:
            printf(" The day is Wednusday ");
        break;
        case 4:
            printf(" The day is Thrusday ");
        break;
        case 5:
            printf(" The day is Friday ");
        break;
        case 6:
            printf(" The day is Saturday ");
        break;
        case 7:
            printf(" The day is Sunday ");
        break;
        default:
        printf(" The day is Invalid day number ");
    }
}