#include<stdio.h>

int main(){
    int cy,jy,bonus;

    printf("Enter the joining year: ");
    scanf("%d",&jy);

    printf("Enter the current year: ");
    scanf("%d",&cy);

    if((cy-jy) > 3){
        bonus = 2500;
        printf("%d is awarded as bonus.",bonus);
    }

    return 0;
}