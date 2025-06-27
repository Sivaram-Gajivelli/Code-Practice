// Lexciographical sorting

#include <stdio.h>
#include <string.h>

void main() {
    char words[100][10];
    char temp[100];

    for(int i=0; i<5; i++) {
        printf("Enter the word %d: ", i+1);
        scanf("%s", words[i]);
    }

    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            if(strcmp(words[i], words[j]) < 0) {
                int k=0;
                while (words[i][k] != '\0' || words[j][k] != '\0') {
                    temp[k] = words[i][k];
                    words[i][k] = words[j][k];
                    words[j][k] = temp[k];
                    k++;
                }                
            }
        }
    }

    printf("Words after lexciographical sorting: \n");
    for(int i=0; i<5; i++) {
        printf("%s \n", words[i]);
    }
}