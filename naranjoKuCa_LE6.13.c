#include <stdio.h>
#include <math.h>

// Global variables for the quadratic solver
int root1, root2;

// Function to display the menu
void displayMenu() {
  printf("\nProblem Solver Menu\n");
  printf("====================\n");
  printf("1. Power problem solver\n");
  printf("2. Factorial problem solver\n");
  printf("3. Quadratic equation solver\n");
  printf("4. Quit\n");
  printf("Enter your choice: ");
}

// Function to solve the power problem
int powerSolver(int base, int p) {
  int result = 1;
  for (int i = 0; i < p; i++) {
    result *= base;
  }
  return result;
}

// Function to solve the factorial problem
int factorialSolver(int num) {
  if (num == 0 || num == 1) {
    return 1;
  } else {
    return num * factorialSolver(num - 1);
  }
}

// Function to solve the quadratic equation
int quadraticSolver(int a, int b, int c) {
  // Calculate the discriminate
  int discriminant = b * b - 4 * a * c;

  // If the discriminate is negative, there are no real roots
  if (discriminant < 0) {
    return 0;
  }

  // Calculate the two roots
  root1 = (-b + sqrt(discriminant)) / (2 * a);
  root2 = (-b - sqrt(discriminant)) / (2 * a);

  // Return the number of roots
  return 2;
}

int main() {
  int choice;

  // Display the menu and get the user's choice
  displayMenu();
  scanf("%d", &choice);

  // While the user does not want to quit, loop
  while (choice != 4) {
    // Switch on the choice and solve the corresponding problem
    switch (choice) {
      case 1:{
        // Power problem solver
        int base;
        int p;
        printf("Enter the base: ");
        scanf("%d", &base);
        printf("Enter the power: ");
        scanf("%d", &p);
        int result = powerSolver(base, p);
        printf("The result is: %d\n", result);
        break;
        }
      case 2:{
        // Factorial problem solver
        int num;
        printf("Enter the number: ");
        scanf("%d", &num);
        int factorial = factorialSolver(num);
        printf("The factorial of %d is: %d\n", num, factorial);
        break;
      }
      case 3:{
        // Quadratic equation solver
        int a, b, c;
        printf("Enter the coefficients of the quadratic equation (a, b, c): ");
        scanf("%d %d %d", &a, &b, &c);
        int numRoots = quadraticSolver(a, b, c);
        if (numRoots == 0) {
          printf("There are no real roots.\n");
        } else if (numRoots == 1) {
          printf("The root is: %d\n", root1);
        } else {
          printf("The roots are: %d, %d\n", root1, root2);
        }
        break;
      }
      default:
        printf("Invalid choice.\n");
        break;
    }

    // Display the menu again
    displayMenu();
    scanf("%d", &choice);
  }

  // The user wants to quit, so exit the program
  printf("Sayonara!\n");
  return 0;
}
