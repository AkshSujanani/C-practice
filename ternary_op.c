#include<stdio.h>

void main(){
    int n1,n2,n3;

    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&n1,&n2,&n3);

    (n1>n2?(n1>n3?printf("%d is biggest.",n1):printf("%d is biggest.",n3)):(n2>n3?printf("%d biggest.",n2):printf("%d is biggest.",n3)));
}