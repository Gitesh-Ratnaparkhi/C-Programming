#include<stdio.h>
int main(){
    printf("Enter the buying price : ");
    int buy;
    scanf("%d",&buy);
    int sell ;
    printf("Enter the selling price : ");
    scanf("%d",&sell);
    if(sell >= buy)printf("The shop keeps is in profit of %d",sell-buy);
    else printf("The shoper keeper is is loss of %d",buy-sell);
    return 0 ;
}