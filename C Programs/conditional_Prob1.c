/* Write a prog to check whether a given char is an vowel or consonant or non alphabet
   Using if*/

#include<stdio.h>

void main() {
    char chr;
    printf("Enter a character: ");
    scanf("%c", &chr);

    if((chr >= 'a' && chr <= 'z') || (chr >= 'A' && chr <= 'Z')) {
        if(chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u' || 
            chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U'){
            printf("Vowel");
        }

        else {
            printf("Consonant");
        }
    }

    else {
        printf("Non alphabet");
    }
}