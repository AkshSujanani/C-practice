#include<stdio.h>

int main(){
    int n , year , total_days;

    n = 1900;
    printf("Enter a year: ");
    scanf("%d" , &year);

    int leap = 0;
    total_days = 0;
    while(n<year){
        if((n%4 == 0 && n%100 != 0) || (n%400 == 0)){
            total_days += 366;
            leap++;
        }     
        else
            total_days += 365;
        n++;
    }

    if(total_days % 7 == 0)
        printf("Monday");
    else if(total_days % 7 == 1)
        printf("Tuesday");
    else if(total_days % 7 == 2)
        printf("Wednesday");
    else if(total_days % 7 == 3)
        printf("Thursday");
    else if(total_days % 7 == 4)
        printf("Friday");
    else if(total_days % 7 == 5)
        printf("Saturday");
    else if(total_days % 7 == 6)
        printf("Sunday");

    printf("\n%d" , leap);

    return 0;
}