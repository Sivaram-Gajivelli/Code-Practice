// Lexciographical patterns

#include <stdio.h>

void main() {
    char ch, i, j;

    for(i='A'; i<='E'; i++) {
        printf("%c \n", i);
    }

    for(i='A'; i<='E'; i++) {
        for(j='A'; j<='E'; j++) {
            printf("%c%c\n", i, j);
        }
    }

    for(i='A'; i<='E'; i++) {
        for(j='A'; j<='E'; j++) {
            for(ch='A'; ch<='E'; ch++){
                printf("%c%c%c \n", i, j, ch);
            }
        }
    }
}