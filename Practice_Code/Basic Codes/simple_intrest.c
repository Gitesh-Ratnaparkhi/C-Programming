// calculate the simple intrest 
#include<stdio.h>
int main(){
    float principle ;
    printf("Enter the principle ");
    scanf("%f",&principle);
    float rate;
    printf("Enter the rate ");
    scanf("%f",&rate);
    float time ;
    printf("Enter the time ");
    scanf("%f",&time);
    float si = (principle * rate * time) / 100;
    printf("Simple intrest is %f",si);
    return 0 ;    
}