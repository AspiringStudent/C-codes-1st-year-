/*
============================================================================
FILE : naranjoKuCa_LE3.11
AUTHOR : Kurt Casey V. Naranjo
DESCRIPTION : Algorithm to get the weekly pay using yearly pay
COPYRIGHT : created
REVISION HISTORY
Date: September 15, 2023 By: Kurt Casey V. Naranjo Description: Everything
============================================================================
*/
/*
============================================================================
FUNCTION : yearly pay to weekly pay
DESCRIPTION : Solves the weekly pay of the user using the yearly pay
ARGUMENTS :
float yearly - it is the yearly pay
float weekly - it is the weekly pay
RETURNS : void
===========================================================================
*/

#include<stdio.h>

int main()
{
    float weekly;
    float yearly;

    printf("Input your yearly pay: ");
    scanf("%f", &yearly);

    weekly = yearly/52;
    printf("weekly pay: %f", weekly);

    return 0;

}
