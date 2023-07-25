#include<stdio.h>
#include<stdbool.h>
int main(){
    int num;
    bool boolean;
    // note bool cannot be taken as input in c.
    float num2;
    char character;
    char name[6];
    printf("Enter the number \n");
    scanf("%d",& num);
    printf("The entered number is %d \n",num);
    
    printf("Enter for true 1 and for false 0 \n");
    scanf("%d",& boolean);
    printf("The entered boolean is %d \n",boolean);
    
    printf("Enter the character \n");
    scanf("%c",& character);
    printf("The entered character is %c \n",character);
  
    printf("Enter the string \n");
    scanf("%c",&name[]);
    printf("The entered character is %c \n",name);
  
  

    return 0;
}