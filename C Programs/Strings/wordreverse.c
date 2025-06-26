// reverse of a word

#include<stdio.h>
#include <string.h>

void main() {
    char word[100], reverse[100];
    int k=0;

    printf("Enter a word: ");
    scanf("%s", word);

    for(int i=strlen(word)-1; i>=0; i--) {
        reverse[k] = word[i];
        k++;
    }

    reverse[k] = '\0';

    printf("Reverse of %s is %s", word, reverse);
}