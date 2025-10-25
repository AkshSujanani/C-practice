#include<stdio.h>
#include<math.h>

void equation(int n, float x[100], float y[100]);

int main(){
	int n, i;
	float x[100], y[100];

	printf("Enter the number of points: ");
	scanf("%d", &n);

	printf("Enter the values of x and y: ");

	for(i=0; i<n; i++){
		printf("x[%d] y[%d]: ", i+1, i+1);
		scanf("%f %f", &x[i], &y[i]);
	}

	equation(n, x, y);
	return 0;
}

void equation(int n, float x[100], float y[100]){
	int i;
	float sum_x=0, sum_y=0, sum_xy=0, sum_x2=0, m=0, c=0;

	for(i=0; i<n; i++){
		sum_y += y[i];
		sum_x += x[i];
		sum_xy += x[i]*y[i];
		sum_x2 += pow(x[i], 2);
	}

	m = (n*sum_xy - sum_x*sum_y)/(n*sum_x2 - pow(sum_x,2));
	c = (sum_y - m*sum_x)/n;

	printf("y=%fx+%f",m,c);
}
