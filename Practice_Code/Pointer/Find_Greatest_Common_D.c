#include<stdio.h>
int min(int a , int b){
    if(a>=b)return a;
    else return b;
}
int Greatest_Common_factor(int num1 , int num2){
    int hcf = 0;
    for(int i = 1; i<= min(num1 , num2); i++){
        if(num1 % i== 0 && num2%i ==0) hcf = i;
    }
    return hcf;
}
int main(){
    int num1 ;
    printf("Enter the number 1 : ");
    scanf("%d",&num1);
    int num2;
    printf("Enter the number 2 : ");
    scanf("%d",&num2);
    int result = Greatest_Common_factor(num1 , num2);
    printf("The Greatest common factor is : %d",result);
    return 0;
}