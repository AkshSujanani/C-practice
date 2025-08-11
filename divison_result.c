#include<stdio.h>

int main(){
    int m1,m2,m3,m4,m5,total;
    
    printf("Enter the marks in 5 subjects");
    scanf("%d %d %d %d %d" , &m1 ,&m2 ,&m3 ,&m4 , &m5);

    total = (m1+m2+m3+m4+m5)/5;

    if(total >= 60)
        printf("First Divison");
    
    else{
        if(total >= 50)
            printf("Second Divison");
        else{
            if(total>=40)
                printf("Third Divison");
            else
                printf("Fail");
        }
    }
    return 0;
}