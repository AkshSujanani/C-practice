#include<stdio.h>

void largest_num(int *arr){
	int i=5, j=5;

	for(i=0; i<5; i++)
		for(j=0; j<5; j++){
			if(*arr>=*(arr+i*5+j))
				continue;
			else
				*arr=*(arr+i*5+j);
		}
	printf("%d",*arr);
}

int main(){
	int arr[5][5] = {10,20,40,30,
			 		 50,60,70,80,89,
			 		 60,110,111,112,119,
			 		 20,30,40,47,67,
			 		 31,32,33,135,37};
	largest_num(arr);
	return 0;
}