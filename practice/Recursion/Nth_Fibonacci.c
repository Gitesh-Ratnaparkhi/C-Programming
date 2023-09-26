#include<stdio.h>
int NTh_Fibonacci(int num1){
    if(num1==1 || num1==2) return 1;
    int ans1 = NTh_Fibonacci(num1-1);
    int ans2 = NTh_Fibonacci(num1 - 2);
    int ans = ans1 + ans2;
    return ans;
}
int main(){
    int num;
    printf("Enter the number whose Nth fibonacci you have to calculate : ");
    scanf("%d",&num);
    printf("The Nth fibonacci is : %d",NTh_Fibonacci(num));
    return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                