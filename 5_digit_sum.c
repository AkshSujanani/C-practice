#include<stdio.h>

int main(){
	int num , sum = 0;
	printf("Enter a number: ");
	scanf("%d",&num);

	for( ; num>0 ; ){
		sum = sum+(num%10);
		num/=10;
	}

	printf("%d",sum);
	return 0;
}
