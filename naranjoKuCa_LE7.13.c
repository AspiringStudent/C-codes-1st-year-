/*
============================================================================
FILE : naranjoKuCa_LE7.13
AUTHOR : Kurt Casey V. Naranjo
DESCRIPTION : Longest String
COPYRIGHT : created
REVISION HISTORY
Date: November 19, 2023
By: Kurt Casey V. Naranjo
Description: Code

Date: November 21, 2023
By: Kurt Casey V. Naranjo
Description: Headers
============================================================================
*/
#include <stdio.h>
#include <string.h>
/*
============================================================================
FUNCTION : findLongest
DESCRIPTION : finds the longest string
ARGUMENTS :
int largest = strlen(str[0])
int largestIndex = 0
RETURNS : largestIndex
===========================================================================
*/
int findLongest(char str[][100], int n){
    int largest = strlen(str[0]);
    int largestIndex = 0;
    for (int i = 1; i < n; i++){
        if (strlen(str[i]) > largest){
            largest = strlen(str[i]);
            largestIndex = i;
        }
    }
    return largestIndex;
}
/*
============================================================================
FUNCTION : main
DESCRIPTION : DISPLAY the longest string in the 5 user inputs
ARGUMENTS :
char s[5][100]
int len
RETURNS : 0
===========================================================================
*/
int main(){
    char s[5][100];
    int len;
    printf("Input 5 strings:\n");
    for (int i = 0; i < 5; i++){
        gets(s[i]);
    }
    int largestIndex = findLongest(s, 5);
    printf("Longest String: %s \n", s[largestIndex]);

    return 0;
}

