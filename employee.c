#include<stdio.h>
#include<string.h>

struct employee{
    int emp_code;
    int date;
    char name[20];
};

void tenure(struct employee emp[]){
    int i, year;
    printf("\nEnter the current year: ");
    scanf("%d",&year);

    printf("Name of employees with tenure greater than equal to 3 years:\n");
    for(i=0; i<5; i++)
        if(year-emp[i].date >= 3)
            printf("%s\n",emp[i].name);
}

int main(){
    struct employee emp[5];
    int i;

    printf("Enter the data of 5 Employees:\n");
    for(i=0; i<5; i++){
        printf("Employee code: ");
        scanf("%d",&emp[i].emp_code);
        printf("Year of joining: ");
        scanf("%d",&emp[i].date);
        printf("Name of employee: ");
        scanf(" %[^\n]",emp[i].name);
    }

    tenure(emp);
    return 0;
}