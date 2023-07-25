#include<stdio.h>
int main(){
    printf("Enter the length of the rectangle : ");
    int length;
    scanf("%d",&length);
    int breadth ;
    printf("Enter the breadth of the rectangle : ");
    scanf("%d",&breadth );
    if( (length * breadth) >= ( 2* (length+breadth) ) )printf("The area of the rectangle is geater ");
    else printf("The perimeter of the rectangle is greater ");
    return 0 ;
}