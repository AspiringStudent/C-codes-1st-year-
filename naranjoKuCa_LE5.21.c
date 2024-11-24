#include <stdio.h>

int main() {
    int rows, columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    // Prompt the user for the number of rows and columns.

    printf("\nMultiplication Table:\n");
    for (int i = 1; i <= rows; i++) {
        for (int x = 1; x <= columns; x++) {
            printf("%d\t", i * x);
        }
    printf("\n");
    }
    // Display the multiplication table.
  return 0;
}

