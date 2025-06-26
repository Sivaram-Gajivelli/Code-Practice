// reverse the sentence - India won the war -> aidnI now eht raw

#include <stdio.h>
#include <string.h>

void main() {
    char str[100], strrev[100];
    int length=0, k=0, index=0, i;

    printf("Enter a sentence: ");
    // scanf("%[^\n]", str);
    gets(str);


    for(i=0; str[i]!='\0'; i++) {
        length++;
    }

    for(i=0; i<length; i++) {
        if(str[i] == ' ') {
            
            for(int j=i-1; j>=k; j--) {
                strrev[index] = str[j];
                index++;
            }

            strrev[index] = ' ';
            index++;
            k=i+1;
        }
    }

    for(int j=i-1; j>=k; j--) {
        strrev[index] = str[j];
        index++;
    }

    strrev[index] = '\0';

    printf("Reversed sentence: %s", strrev);
}