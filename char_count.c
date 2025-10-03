#include<stdio.h>
#include<string.h>

void count(char *s[]){
    char *temp;
    int i, count=0;

    for(i=0; i<6; i++){
        temp = s[i];
        while(*temp != '\0'){
            if(*temp=='e' || *temp=='E')
                count++;
            temp++;
        }
    }
    printf("Count of 'e' = %d",count);
}

void main(){
    char *s[]={
        "We will teach you how to...",
        "Move a mountain",
        "Level a building",
        "Erase the past",
        "Make a million",
        "...all through C!"
    };

    count(s);
}