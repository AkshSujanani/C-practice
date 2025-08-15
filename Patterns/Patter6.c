#include<stdio.h>

int main(){
    int i , j , k , n;

    printf("Enter the number of rows:\n");
    scanf( "%d" , &n);

    for(i = 1 ; i <= n+1 ; i++){
        
        for(k = 1 ; k < i ; k++)
            printf(" ");
        
        for(j = n ; j >= (i-1) ; j--)
            printf("*");

        printf("\n");
    }

    return 0;
}