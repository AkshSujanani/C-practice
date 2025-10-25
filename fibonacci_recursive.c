#include<stdio.h>

int main(){
    printf("First 25 fibonacci numbers: ");
    fibonacci(25,0,1);
    return 0;
}

int fibonacci(int n, int t1, int t2){
    int t3;
    if(n>=1){
        printf("%d\t",t1);
        t3 = t1+t2;
        t1 = t2;
        t2 = t3;
        fibonacci(n-1,t1,t2);
    }

    return 0;
}
