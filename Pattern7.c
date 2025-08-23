#include<stdio.h>
int main(){

    int i , j , n , counter , k;

    printf("Enter the number of rows:\n");
    scanf("%d" , &n);

    counter = 0;
    for(i = 1 ; i <= n ; i++){
        for(j = n ; j > i ; j--)
            printf(" ");
        
        for(k = 1 ; k <= (i+counter) ; k++)
            printf("*");
        
        printf("\n");
        counter++;
    }

    return 0;
}