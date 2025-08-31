#include<stdio.h>
#include<stdlib.h>

int odd_even(int num){
    if(num%2 == 0)
        printf("%d is a Even Number." , num);
    else
        printf("%d is a Odd Number" , num);
    return 0;
}

//int 
int main(){
    int choice , n;
    printf("1.Odd or even? \n2.Prime or not? \n3.Calculate Factorial? \n4.Fibonacci to n elements? \n5.Exit");
    
    do{
        printf("\nEnter the choice number: ");
        scanf("%d" , &choice);
        
        if(choice == 5)
            exit(1);
        else{
            printf("\nEnter a Number: ");
            scanf("%d" , &n);
            switch(choice){
                case 1:
                    odd_even(n);
                    break;
                case 2:
                int *x = n;
                    //prime();
                case 3:
                    //factorial();
                case 4:
                    //fibonacci();
            }
        }
    }while(1);

    return 0;
}