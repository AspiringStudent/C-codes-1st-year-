/*
============================================================================
FILE : naranjoKuCa_LE7.11
AUTHOR : Kurt Casey V. Naranjo
DESCRIPTION : Largest and Smallest
COPYRIGHT : created
REVISION HISTORY
Date: November 18, 2023
By: Kurt Casey V. Naranjo
Description: Everything
============================================================================
*/
#include <stdio.h>
/*
============================================================================
FUNCTION : gets_numbers
DESCRIPTION : gets the numbers
ARGUMENTS :
int arr[]
int n
int i
RETURNS :
===========================================================================
*/
void getNumbers(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
/*
============================================================================
FUNCTION : display_numbers
DESCRIPTION : display the numbers entered
ARGUMENTS :
int arr[]
int n
int i
RETURNS :
===========================================================================
*/
void displayNumbers(int arr[], int n)
{
    printf("Numbers entered: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
/*
============================================================================
FUNCTION : findLargest
DESCRIPTION : Finds the largest number in the inputted numbers
ARGUMENTS :
int arr[]
int n
int i
int largest
RETURNS : largest
===========================================================================
*/
int findLargest(int arr[], int n)
{
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}
/*
============================================================================
FUNCTION : findSmallest
DESCRIPTION : gets the smallest numbers in the inputted numbers
ARGUMENTS :
int arr[]
int n
int i
int smallest
RETURNS : smallest
===========================================================================
*/
int findSmallest(int arr[], int n)
{
    int smallest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}
/*
============================================================================
FUNCTION : main
DESCRIPTION : After Calling the functions previously, displays the largest and smallest numbers.
ARGUMENTS :
int n
int numbers[n]
int largest
int smallest
RETURNS : 0
===========================================================================
*/
int main()
{
    int n = 10; // Number of elements to be entered

    int numbers[n]; // Static array to store the numbers

    getNumbers(numbers, n);

    displayNumbers(numbers, n);

    int largest = findLargest(numbers, n);
    int smallest = findSmallest(numbers, n);

    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}
