#include<stdio.h>

int main(){
    float cp , sp;

    printf("Enter the cost price of product:\t");
    scanf("%f" , &cp);
    
    printf("Enetr the selling price of product:\t");
    scanf("%f" , &sp);

    if(cp>sp)
        printf("Profit incurred: %f" , (cp-sp));
    else if(sp>cp)
        printf("Loss incurred: %f" , (sp-cp));

    return 0;
}