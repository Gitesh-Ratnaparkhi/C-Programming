#include<stdio.h>
#include <stdbool.h>
int main(){
    int num = 1;
    while(true){
        if(num % 5 == 0 && num % 7 == 0) {
            printf("The number which is multiple of 5 and 7 is : %d",num);
            break;
        }
        num++;
    }
}