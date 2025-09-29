#include<stdio.h>

int main(){
	int i, temp, arr[]={44,33,22,11,55};

	printf("Unsorted Array:\n");
	for(i=0;i<5;i++)
		printf("%d\t",arr[i]);

	for(i=0;i<4;i++)
		if(arr[0]>arr[i]){
			temp=arr[0];
			arr[0]=arr[i];
			arr[i]=temp;
		}
	
	printf("\nSorted Array:\n");
	for(i=0;i<5;i++)
		printf("%d\t",arr[i]);

	return 0;
}
	
