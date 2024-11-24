/*
============================================================================
FILE : naranjoKuCa_LE5.11
AUTHOR : Kurt Casey V. Naranjo
DESCRIPTION : Gets 10 integers and get the average of even and the product of odd inputs
COPYRIGHT : created
REVISION HISTORY
Date: September 26, 2023 By: Kurt Casey V. Naranjo Description: Everything
============================================================================
*/
/*
============================================================================
FUNCTION : Average of Even Numbers and Product of Odd Numbers
DESCRIPTION : Gets 10 integers and get the average of even and the product of odd inputs
ARGUMENTS :
int addEven  = Sum of Even Inputs
int countEven = Number of Even inputs
int productOdd = Product of Odd inputs
int attempt = keep count of all attempts
int num = value of input
double averageEven = checks if value input is 0 and if it is not then evaluates it
RETURNS : void
===========================================================================
*/
#include <stdio.h>
#include <conio.h>

int main() {
  int addEven = 0;
  int countEven = 0;
  int productOdd = 1;

  int attempt = 0;
  do {
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
// scans the inputted number
    if(num % 2 == 0) {
        addEven += num;
        countEven++;
    }
    // determines if the number is even
    else {
        productOdd *= num;
    }
    // if  not even then its odd
    attempt++;
  } while(attempt < 10);
// limits the input to 10
  double averageEven = countEven > 0 ? (double)addEven / countEven : 0.0;
//checks if the amount of even inputs is more than 0, if not then evaluates even average as 0.0
  printf("Average of even numbers: %f\n", averageEven);
  printf("Product of odd numbers: %d\n", productOdd);
//prints the results of Even Average and Odd product
  getch();
}
