#include<stdio.h>
#include<stdlib.h>

int main(){
    int choice,i,counter,n ;

    printf("1.Factorial\n");
    printf("2.Prime?\n");
    printf("3.Odd or even?\n");
    printf("4.Fibonacci to n elements?\n");
    printf("5.Exit");
    
    while(1){
        printf("\nEnter the choice number:\t");
        scanf("%d" , &choice);

        switch(choice)
        {
            case 1:
                counter = 1;
                printf("Enter a number: ");
                scanf("%d" , &n);
                for(i=1 ; i<=n ; i++){
                    counter *= i;
                }
                printf("%d",counter);
                break;

            case 2:                         //case to check whether n is a prime number
                counter = 1;
                printf("Enter a number: ");
                scanf("%d" , &n);
                if(n==0 || n==1){
                    printf("Entered number should be greater than 1");
                    break;
                }
            
                else if(n == 2)
                    printf("2 is a prime number");

                else{
                    for(i=2 ; i<n ; i++)
                        if(n%i == 0){
                        counter = 0;
                        break;
                    }
                }
                if(counter == 1)
                    printf("%d is a prime number." , n);
                break;
        
            case 3:
                printf("Enter a number: ");
                scanf("%d" , &n);
                if(n%2 == 0)
                    printf("%d is a even number" , n);
                else
                    printf("%d is a odd number" , n);
                break;

            case 4:
                printf("Enter the number of elements to print: ");
                scanf("%d" , &n);
                int num1 = 0 , num2 = 1 , num3;
                for(i=1 ; i<=n ; i++){
                    printf("%d\t" , num1);
                    num3 = num1+num2;
                    num1 = num2;
                    num2 = num3;
                }
                break;        
        
            case 5:
                exit(0);
        }
    }

    return 0;
}