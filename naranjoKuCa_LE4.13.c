/*
============================================================================
FILE : naranjoKuCa_LE4.13
AUTHOR : Kurt Casey V. Naranjo
DESCRIPTION : Analyzes average grade as passed or failed
COPYRIGHT : created
REVISION HISTORY
Date: September 20, 2023 By: Kurt Casey V. Naranjo Description: Everything
============================================================================
*/
/*
============================================================================
FUNCTION : Grades Analyzer
DESCRIPTION : Solves the Average and assess if its passed or failed
ARGUMENTS :
float firstMark = first mark
float secondMark = second mark
float thirdMark = third mark
float fourthMark = fourth mark
float average = average of the grade
float totalGrade = total grade by multiplying adding all the marks
RETURNS : void
===========================================================================
*/

#include <stdio.h>

int main()

{
    float firstMark;
    float secondMark;
    float thirdMark;
    float fourthMark;
    float average;
    float totalGrade;

    printf("Enter your first mark:");
    scanf("%f", &firstMark);
// get the first mark value
    printf("Enter your second Mark:");
    scanf("%f", &secondMark);
// get the second mark value
    printf("Enter your third Mark:");
    scanf("%f", &thirdMark);
// get the third mark value
    printf("Enter your fourth Mark:");
    scanf("%f", &fourthMark);
// get the fourth mark value
    totalGrade = (firstMark + secondMark + thirdMark + fourthMark);
// get the total grade value
    average =  totalGrade / 4;
// get the average value
    if (average > 100) {
        printf("Invalid Input");
    }
    else if (average < 0){
        printf("Invalid Input");
    }
// display Invalid Input when average is more than 100 or less than 0
    else if (average >= 50){
        printf("Passed");
    }
// display Passed if average is equal to or more than 50
    else if (average < 50) {
        printf("Failed");
    }
// display Failed if average is less than 50
    else {
        printf("Invalid Input");
    }
//  display Invalid Input if the value is anything else that is not stated above
    return 0;
}
