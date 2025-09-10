#include<stdio.h>
#include<string.h>

int main(){
    int length , i=0 , j , check=1;
    char word[50] , rev_word[50];

    printf("Enter the word to be checked: ");
    scanf("%s",&word);
    length = strlen(word);

    j = length-1;
    int x = j;
    while(j>=0){
        rev_word[i] = word[j];
        i++;
        j--;
    }

    for(i=0;i<=x;i++){
        if(rev_word[i] == word[i])
            check = 1;
        else
            check = 0;
    }

    if(check == 1)
        printf("%s is a palindrome.",word);
    else
        printf("%s is not a palindrome",word);
    return 0;
}