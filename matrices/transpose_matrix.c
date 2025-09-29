#include<stdio.h>

void transpose(int arr[][4]){
    int i,j;
    int tran_arr[4][4];

    for(i=0; i<4; i++)
        for(j=0; j<4; j++)
            tran_arr[i][j] = arr[j][i];
        
    for(i=0; i<4; i++){
        for(j=0; j<4; j++)
            printf("%d\t", tran_arr[i][j]);
        printf("\n");
    }
}

int main(){
    int arr[4][4]={1,6,10,14,
                   2,7,11,15,
                   4,8,12,16,
                   5,9,13,17};

    transpose(arr);
    return 0;
}