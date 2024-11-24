/*
============================================================================
FILE : naranjo&degran_LE8.13
AUTHOR : Kurt Casey V. Naranjo & Klint Louis Degran
DESCRIPTION : Maximum Number
COPYRIGHT : created
REVISION HISTORY
Date: November 26, 2023
By: Kurt Casey V. Naranjo & Klint Louis Degran
Description: Code and Headers
============================================================================
*/
#include <stdio.h>
#include <stdlib.h>
/*
============================================================================
FUNCTION : inputArray
DESCRIPTION : Scans the inputted number as an array
ARGUMENTS :
int *arr
int n
RETURNS :
===========================================================================
*/
void inputArray(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    printf("Enter number: ");
    scanf("%d", &arr[i]);
  }
}

/*
============================================================================
FUNCTION : findMax
DESCRIPTION : Scans the inputted number as an array
ARGUMENTS :
int *arr
int n
int max = arr[0]
RETURNS : max
===========================================================================
*/
int findMax(int *arr, int n) {
  int max = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}
/*
============================================================================
FUNCTION : main
DESCRIPTION : Gets the number of entries, Display the max number
ARGUMENTS :
int *arr = malloc(n * sizeof(int));
int max = findMax(arr, n)
RETURNS :
===========================================================================
*/
int main() {
  int n;
  printf("Enter number of entries: ");
  scanf("%d", &n);

  int *arr = malloc(n * sizeof(int));

  if (!arr) {
    printf("How did we get here?\n");
    return 1;
  }

  inputArray(arr, n);

  int max = findMax(arr, n);
  printf("Maximum Number: %d\n", max);

  free(arr);

  return 0;
}
