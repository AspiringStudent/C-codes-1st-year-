/*
============================================================================
FILE : naranjoKuCa_LE4.12
AUTHOR : Kurt Casey V. Naranjo
DESCRIPTION : Quadratic Equation
COPYRIGHT : created
REVISION HISTORY
Date: September 20, 2023 By: Kurt Casey V. Naranjo Description: Everything
============================================================================
*/
/*
============================================================================
FUNCTION : Quadratic Equation
DESCRIPTION : shows if there is solution for the 3 values in a quadratic equation
ARGUMENTS :
float a = a value
float b = b value
float c = c value
float discriminant = discriminant value
float r1 = result 1
float r2 = result 2
RETURNS : void
===========================================================================
*/

#include <stdio.h>
#include <math.h>
int main()
{

    float a;
    float b;
    float c;
    float discriminant;
    float r1;
    float r2;

    printf ("a value:");
    scanf ("%f", &a);
    printf ("b value:");
    scanf ("%f", &b);
    printf ("c value:");
    scanf ("%f", &c);
    // getting the values of a, b and c from the user
    discriminant = b * b - 4 * a * c;
    // discriminant's value

    if (a == 0 && b == 0) {
        printf ("There are no solutions");
    }
    else if (a == 0) {
        r1 = -c / b;
        printf ("1 Solution found: -c/b");
    }
    // if a is zero then display 1 solution found: -c/b
    else if (discriminant < 0){
        printf ("There are no real roots");
    }
    // if discriminant is less than 0 or negative in value, display there are no real roots
    else{
        r1 = (-b + sqrt(discriminant))/2 * a;
        r2 = (-b - sqrt(discriminant))/2 * a;
        printf ("There are two roots");
    }
    // else display there are two roots
    return 0;
}
