#include<stdio.h>

int main(){

    int x,y,total;

    printf("Enter the quantity of item: ");
    scanf("%d" , &x);

    printf("Enter the price per item: ");
    scanf("%d", &y);

    if(x > 1000)
        total = (x*y*0.1);
    else
        total = (x*y);

    printf("%d",total);
    return 0;
}