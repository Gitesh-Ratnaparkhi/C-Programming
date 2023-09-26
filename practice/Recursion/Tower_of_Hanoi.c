#include<stdio.h>
void tower_hanoi(int num , char s , char h , char d){
    if(num == 0)return;
    tower_hanoi(num -1 ,s , d , h);
    printf("%c --> %c \n", s , d);
    tower_hanoi(num - 1, h , s , d);
    return ;
    } 
int main(){
    int num;
    printf("Enter the number of disk : ");
    scanf("%d",&num);
    tower_hanoi(num , 'A' , 'B' , 'C');
    return 0;
}