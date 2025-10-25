#include<stdio.h>

int main(){
	int n, i, a[100], temp;
	
	printf("Enter the number of elments: ");
	scanf("%d", &n);

	printf("Enter the elments:\n");
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	
	for(i=0; i<n-1; i+=2){
		temp = a[i];
		a[i] = a[i+1];
		a[i+1] = temp;
	}

	printf("New array:\n");
	for(i=0; i<n; i++)
		printf("%d\t", a[i]);
	
	return 0;
}
