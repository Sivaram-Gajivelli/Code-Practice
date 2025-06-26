// Anagram - Ex. listen -> silent
//
// Process to find anagram:
// -> Check if two strs are of same length or not
// -> convert both of them into lowercase or uppercase
// -> Sort them and compare the strs

#include <stdio.h>
#include <string.h>

void main() {
    char str1[] = "Lavender Brown", str2[] = "Brand New Lover";
    char s1[100], s2[100];
    int c1 = 0, c2;

    // removing white spaces and converting to lower case 
    for (int i = 0; i < strlen(str1); i++) {
        if(str1[i] == ' ') {
            continue;
        }

        else {
            if(str1[i] >= 'A' && str1[i] <= 'Z') {
                s1[c1] = str1[i] + 32;
            }
            
            else {
                s1[c1] = str1[i];
            }
            c1++;
        }
    }
    s1[c1] = '\0';

    for (int i = 0; i < strlen(str2); i++) {
        if(str2[i] == ' ') {
            continue;
        }

        else {
            if(str2[i] >= 'A' && str2[i] <= 'Z') {
                s2[c2] = str2[i] + 32;
            }
            
            else {
                s2[c2] = str2[i];
            }
            c2++;
        }
    }
    s2[c2] = '\0';

    if(strlen(s1) == strlen(s2)) {
        // sorting
        for (int i = 0; i < c1; i++)
        {
            for(int j = i+1; j < c1; j++){
                if(s1[i] > s1[j]) {
                    char temp = s1[i];
                    s1[i] = s1[j]; 
                    s1[j] = temp;
                }
            }
        }
        
        for (int i = 0; i < c2; i++)
        {
            for(int j = i+1; j < c2; j++){
                if(s2[i] > s2[j]) {
                    char temp = s2[i];
                    s2[i] = s2[j]; 
                    s2[j] = temp;
                }
            }
        }

        // printf("str1: %s \nstr2: %s\n", s1, s2);

        if(strcmp(s1, s2) == 0) {
            printf("\"%s\" and \"%s\" are Anagrams", str1, str2);
        }

        else
        {
            printf("\"%s\" and \"%s\" are not Anagrams", str1, str2);
        }
    }

    else
    {
        printf("\"%s\" and \"%s\" are not Anagrams", str1, str2);
    }
}