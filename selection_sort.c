#include<stdio.h>

int main(){
    int arr[5]={44,33,55,22,11};
    int i,j,temp;
    int *p,k=1;
    p=&arr[5];

    for(i=0;i<5;i++){
        for(j=k; &arr[j]<=p; j++)
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j]=temp;
                printf("\n%d\t%d\t%d",temp,arr[i],arr[j]);
            }
        k++;
    }

    for(i=0;i<5;i++)
        printf("%d\t",arr[i]);
    
    return 0;
}