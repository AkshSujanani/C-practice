#include<stdio.h>

int main(){
  int i,j;

  for(i=0; i<=4; i++){
    for(j=65; j<=65+i; j++){
      printf("%c", j);
    }
    printf("\n");
  }
  return 0;
}
