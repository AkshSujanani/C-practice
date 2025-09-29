#include<stdio.h>

void main(){
    int num, e_num=0, i, sum=0;

    printf("Enter a number: ");
    scanf("%d",&num);

    for(i=num; i>0; i/=10)
        e_num += (i%10);
    
    for(i=e_num; i>0; i/=10)
        sum += (i%10);

    if(sum == 1)
        printf("%d is a magic number.",num);
    else
        printf("%d is not a magic number.",num);
}