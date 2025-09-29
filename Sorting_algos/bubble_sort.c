#include<stdio.h>

int main(){
	int i,j,temp;
	int arr[]={44,33,22,55,11};
	
	printf("Unsorted Array:\n");
	for(i=0;i<5;i++)
		printf("%d\t",arr[i]);

	for(i=0;i<4;i++)
		for(j=0;j<4-i;j++)
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
	
	printf("\nSorted Array:\n");
	for(i=0;i<5;i++)
		printf("%d\t",arr[i]);

	return 0;
}
