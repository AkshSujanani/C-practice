#include<stdio.h>

void symmetric(int arr[3][3]);

int main(){
	int arr[3][3] = {1, 4, 3,
			 4, 5, 3,
			 3, 4, 5};
	int i,j;

	for(i=0; i<3; i++){
		for(j=0; j<3; j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}

	symmetric(arr);
	return 0;
}

void symmetric(int arr[3][3]){
	int cp[3][3], i, j, temp, flag=0;

	for(i=0; i<3; i++)
		for(j=0; j<3; j++)
			cp[i][j] = arr[i][j];
	
	for(i=0; i<3; i++)
		for(j=i+1; j<3; j++){
			temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	
	for(i=0; i<3; i++)
		for(j=0; j<3; j++)
			if(cp[i][j] != arr[i][j])
				flag = 1;
	
	(flag==0 ? printf("Matrix is symmetric."):printf("Matrix is not symmetric."));
}