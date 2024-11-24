/*
============================================================================
FILE : naranjoKuCa_LE5.13
AUTHOR : Kurt Casey V. Naranjo
DESCRIPTION : Quadratic Equation
COPYRIGHT : created
REVISION HISTORY
Date: October 1, 2023 By: Kurt Casey V. Naranjo Description: Everything
============================================================================
*/
/*
============================================================================
FUNCTION : Calculator for Power problem, factorial problem, and Quadratic Root Problem
DESCRIPTION : Chooses which problem to solve then shows an answer
ARGUMENTS :
double power = algorithm to get power
int factorial = algorithm to get factorial
void quadraticRoots = algorithm to get the quadratic roots
int getChoice = algorithm to get the choice
int choice = signifies the user's inputted choice
double base = user inputted value of the base
double exponent = user inputted value of exponent
double result = result of the power problem
int factorialResult = result of the factorial
int num = factorial number input
double a = value a
double b = value b
double c = value c
double r1 = root 1
double r2 = root 2
RETURNS : 0
===========================================================================
*/
#include <stdio.h>
#include <math.h>

double power(double base, double exponent) {
  if (exponent == 0) {
    return 1;
  } else if (exponent < 0) {
    return 1 / power(base, -exponent);
  } else {
    return base * power(base, exponent - 1);
  }
}

int factorial(int number) {
  if (number == 0) {
    return 1;
  } else {
    return number * factorial(number - 1);
  }
}
// gets the power problem result
void quadraticRoots(double a, double b, double c) {
  double discriminant = b * b - 4 * a * c;
  if (a == 0) {
    if (b == 0) {
      printf("There is no solution.\n");
    } else {
      double x = -c / b;
      printf("There is only one root: %.2f\n", x);
    }
  } else if (discriminant < 0) {
    double r1 = -b / (2 * a);
    double r2 = sqrt(-discriminant) / (2 * a);
    printf("There are no real roots: %.2f + %.2fi and %.2f - %.2fi\n", r1, r2, r1, r2);
  } else {
    double r1 = (-b + sqrt(discriminant)) / (2 * a);
    double r2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("There are real roots: %.2f and %.2f\n", r1, r2);
  }
}
// gets the quadratic root
int getChoice() {
  int choice;
  printf("\nMENU\n");
  printf("1. Power problem solver\n");
  printf("2. Factorial problem solver\n");
  printf("3. Quadratic root finder\n");
  printf("4. Quit\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);
  return choice;
}
// gets the choice of the user
int main() {
  int choice;
  double base, exponent, result;
  int num, factorialResult;
  double a, b, c, r1, r2;

  do {
    choice = getChoice();
// user chooses a problem or quit the simulation
    switch (choice) {
      case 1:
        printf("Enter the base: ");
        scanf("%lf", &base);
        printf("Enter the exponent: ");
        scanf("%lf", &exponent);
        result = power(base, exponent);
        printf("The result is %.2lf.\n", result);
        break;
        // solves for power problem
      case 2:
        printf("Enter the number: ");
        scanf("%d", &num);
        factorialResult = factorial(num);
        printf("The factorial of %d is %d.\n", num, factorialResult);
        break;
        // solves for the factorial problem
      case 3:
        printf("Enter the coefficients (a) quadratic equation: ");
        scanf("%lf", &a);
        printf("Enter the coefficients (b) quadratic equation: ");
        scanf("%lf", &b);
        printf("Enter the coefficients (c) quadratic equation: ");
        scanf("%lf", &c);
        quadraticRoots(a, b, c);
        break;
        // solves for the quadratic root problem
      case 4:
        printf("Sayonara!\n");
        break;
        // when the user chooses to quit the simulation
      default:
        printf("Invalid choice.\n");
        // if the user inputs a number that is not [1-4p]
    }
  } while (choice != 4);
  return 0;
}
