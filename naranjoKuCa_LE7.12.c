/*
============================================================================
FILE : naranjoKuCa_LE7.12
AUTHOR : Kurt Casey V. Naranjo
DESCRIPTION : Vowels and Consonants in String
COPYRIGHT : created
REVISION HISTORY
Date: November 18, 2023
By: Kurt Casey V. Naranjo
Description: Entire code

Date: November 21, 2023
By: Kurt Casey V. Naranjo
Description: Headers
============================================================================
*/
#include <stdio.h>
#include <string.h>
/*
============================================================================
FUNCTION : countVowels
DESCRIPTION : count the vowels in the string
ARGUMENTS :
int i
int vowels = 0
RETURNS : vowels
===========================================================================
*/
int countVowels(char str[100]) {
    int i;
    int vowels = 0;

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
        }
    }
    return vowels;
}
/*
============================================================================
FUNCTION : countLetters
DESCRIPTION : count the amount of letters in the string
ARGUMENTS :
int i
int letters = 0
RETURNS : letters
===========================================================================
*/
int countLetters(char str[100]){
    int i;
    int letters = 0;

    for(i = 0; i < strlen(str); i++){
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'){
            letters++;
        }
    }
    return letters;
}
/*
============================================================================
FUNCTION : main
DESCRIPTION : Displays the amount of vowels and consonant
ARGUMENTS :
char str[100]
int vowels
int letters
RETURNS : 0
===========================================================================
*/
void main() {
    char str[100];
    int vowels;
    int letters;

    printf("Enter a string: ");
    gets(str);
    vowels = countVowels(str);
    letters = countLetters(str);
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", letters - vowels);
}
