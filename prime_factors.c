#include<stdio.h>

int prime(int i){
    int j,pr=1;
    if(i == 2)
        pr = 1;
    else{
        for(j=2 ; j<i ; j++)
            if(i%j == 0)
                pr = 0;
    }

    if(pr == 1)
        return 1;
    else
        return 0;
}

int prime_factor(int num){
    int i;
    i=2;

    while(num > 1){
        if(prime(i))
        //this means if prime function returns 1 ,i.e., prime(1)="true" execute block else prime returns ,i.e., prime(0)="false" 
            while((num%i) == 0){
                num /= i;
                printf("%d\t" , i);
            }
        i++;
    }
    return 0;
}

int main(){
    int num;
    printf("Enter the number whose prime factors you want to find: ");
    scanf("%d" , &num);
    printf("\nPrime factors of %d:\n" , num);
    prime_factor(num);
    return 0;
}