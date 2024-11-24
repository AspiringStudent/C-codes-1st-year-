/*
============================================================================
FILE : naranjo&degran_LE8.12
AUTHOR : Kurt Casey V. Naranjo & Klint Louis Degran
DESCRIPTION : Search Element
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
FUNCTION : search
DESCRIPTION : Finds the index number
ARGUMENTS :
int *arr
int n
int key
RETURNS : i or -1
===========================================================================
*/
int search(int *arr, int n, int key) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == key) {
      return i;
    }
  }
  return -1;
}

/*
============================================================================
FUNCTION : main
DESCRIPTION : Asks for the number of entries and key, Identifies if the index is a valid number
ARGUMENTS :
int n
int key
int *arr = malloc(n * sizeof(int);
int index = search(arr,n, key)
RETURNS : 0
===========================================================================
*/
int main() {
  int n, key;
  printf("Enter number of entries: ");
  scanf("%d", &n);


  int *arr = malloc(n * sizeof(int));

  if (!arr) {
    printf("How did we get here?\n");
    return 1;
  }

  inputArray(arr, n);

  printf("Enter number to search for: ");
  scanf("%d", &key);

  int index = search(arr, n, key);
  if (index != -1) {
    printf("Search data: %d FOUND in Index %d", key, index);
  } else {
    printf("Search data: %d NOT FOUND", key);
  }
  free(arr);

  return 0;
}
