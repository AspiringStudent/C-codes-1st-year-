/*
============================================================================
FILE : naranjoKuCa_LE3.12
AUTHOR : Kurt Casey V. Naranjo
DESCRIPTION : Algorithm to get the sum of the last two digits of the number inputted
COPYRIGHT : created
REVISION HISTORY
Date: September 15, 2023 By: Kurt Casey V. Naranjo Description: Everything
============================================================================
*/
/*
============================================================================
FUNCTION : last two digits sum
DESCRIPTION : Solves the sum of the last two digits of the number
ARGUMENTS :
int num - number inputted
int last_digit - last digit of the sum
int second_to_the_last - second to the last digit of the num
RETURNS : void
===========================================================================
*/
#include <stdio.h>

int main()
{
    int num;
    int last_digit;
    int second_to_the_last;

    printf("Input number: ");
    scanf("%d", &num);

    last_digit = num % 10;
    printf("Last digit of %d is %d \n", num, last_digit);

    second_to_the_last = (num / 10) % 10;
    printf("Second to the last digit of %d is %d \n", num, second_to_the_last);

    int sum = last_digit + second_to_the_last;
    printf("The sum is: %d \n", sum);


    return 0;
}
