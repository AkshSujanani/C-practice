#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct bank{
    int acc_num;
    char name[50];
    float balance;
};

void cust_name(struct bank cust[]){
    int i;
    float amountme;
    
    for(i=0; i<5; i++)
        if(cust[i].balance<100)
            printf("Account no: %d\tName: %s\n",cust[i].acc_num, cust[i].name);
}

void with_dep(struct bank cust[]){
    int i,choice,acc_num;
    float amount;
    
    printf("Please enter your account number: ");
    scanf("%d",&acc_num);

    for(i=0; i<5; i++){
        if(acc_num == cust[i].acc_num){
            printf("\nAccount no: %d\tAmount: %f\n1 for deposit, 0 for withdrawal: ", acc_num, cust[i].balance);
            scanf("%d",&choice);

            switch(choice){
                case 1:
                printf("Enter the Amount to be deposited: ");
                scanf("%f",&amount);
                printf("Total balance in %d: %f", acc_num, cust[i].balance+amount);
                break;

                case 0:
                printf("Enter the Amount to be withdrawn: ");
                scanf("%f",&amount);
                printf("Total balance in %d: %f", acc_num, cust[i].balance-amount);
                break;

                default:
                    printf("Wrong choice entered");
            }
        exit(1);
        }
    }
}

void main(){
    int i;
    struct bank cust[5];

    for(i=0; i<5; i++)
        scanf("%d %s %f", &cust[i].acc_num, cust[i].name, &cust[i].balance);

    cust_name(cust);
    with_dep(cust);
}
