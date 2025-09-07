#include<stdio.h>

int digits_sum(int num){
    int sum;
    if(num == 0)
        return 0;
    else
        sum = (num % 10)+digits_sum(num/10);
    return sum;
}

int main(){
    int num , sum;

    printf("Enter a number: ");
    scanf("%d" , &num);

    sum = digits_sum(num);
    printf("Sum of digits: %d" , sum);

    return 0;
}