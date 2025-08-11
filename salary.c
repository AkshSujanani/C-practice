#include<stdio.h>
#include<ctype.h>

int main(){
    int salary , ys;
    char qualify,gender;

    printf("Years of service");
    scanf("%d",&ys);

    printf("Qualification(P:Postgraduate , G:Graduate):\t");
    scanf(" %c",&qualify);

    printf("Gender(M:Male & F:Female):\t");
    scanf(" %c",&gender);

    if(tolower(qualify) == 'p'){
        if(tolower(gender) == 'm' && ys>=10)
            salary = 15000;
        else if(tolower(gender) == 'm' && ys<10)
            salary = 10000;
        else if(tolower(gender) == 'f' && ys>=10)
            salary = 12000;
        else if(tolower(gender) == 'f' && ys<10)
            salary = 10000;
    }

    else if(tolower(qualify) == 'g'){
        if(tolower(gender) == 'm' && ys>=10)
            salary = 10000;
        else if (tolower(gender) == 'm' && ys<10)
            salary = 7000;
        else if (tolower(gender) == 'f' && ys>=10)
            salary = 9000;
        else if(tolower(gender) == 'f' && ys<10)
            salary = 6000;
    }

    printf("Salary of employee %d" , salary);
    return 0;
}