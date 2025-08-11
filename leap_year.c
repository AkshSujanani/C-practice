 #include<stdio.h>

 int main(){
    int year;

    printf("Year to be checked : \n");
    scanf("%d" , &year);

    //Logic : year is leap year when divisible by 4 but no by 100 or divisible by 400

    if((year%4 == 0 && year%100 != 0) || (year%400 == 0))
        printf("%d is a leap year. " , year);

    return 0;
 }