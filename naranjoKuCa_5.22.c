#include <stdio.h>

int main(){
    int height;
    printf("Number Pyramid\n");
    printf("Enter a number:");
    scanf("%d", &height);
    // prompting the amount of columns
    for (int x = 1; x <= height; x++){
        for (int y = 1; y <= height - x; y++) {
            printf(" ");
        }
        // prints out spaces for the pyramid
        for (int y = 1; y <= x; y++) {
            printf("%d", y);
        }
        // does the left side of the pyramid to the middle
        for (int y = x - 1; y >= 1; y--) {
            printf("%d", y);
        }
        // does the right side of the pyramid
        printf("\n");
    }
    // creates the number pyramid
    return 0;
}
