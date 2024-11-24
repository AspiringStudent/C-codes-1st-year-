/*
============================================================================
FILE : naranjo&degran_LE8.11
AUTHOR : Kurt Casey V. Naranjo & Klint Louis Degran
DESCRIPTION : Days of the Week
COPYRIGHT : created
REVISION HISTORY
Date: November 26, 2023
By: Kurt Casey V. Naranjo & Klint Louis Degran
Description: Code

Date: November 28, 2023
By: Kurt Casey V. Naranjo
Description: Headers
============================================================================
*/
#include <stdio.h>
int inputIdentifier(int givenDayIndex); //universal int
/*
============================================================================
FUNCTION : main
DESCRIPTION : Gets a number and analyze it as either Monday to Sunday(1-7), prints the day of the number
ARGUMENTS :
char *days = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"}
int day
int givenDayIndex
RETURNS : 0
===========================================================================
*/
int main()
{
    char *days[7]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int day;
    int givenDayIndex;

    printf("Enter Number: ");
    scanf("%d", &givenDayIndex);

    day = inputIdentifier(givenDayIndex);

    if(day == 2)
    {
        printf("Day: %s", &*days[givenDayIndex - 1]);
    }
    else
        printf("Invalid Input! Please enter week number between 1-7.");

    return 0;
}
/*
============================================================================
FUNCTION : inputIdentifier
DESCRIPTION : Identifies if the input is valid
ARGUMENTS :
int givenDayIndex
RETURNS : 2 or 1
===========================================================================
*/
int inputIdentifier(int givenDayIndex)
{
    if(givenDayIndex > 0 && givenDayIndex < 8)
    {
        return 2;
    }
    else
    {
        return 1;
    }
}
