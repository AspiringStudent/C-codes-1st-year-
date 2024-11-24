#include <stdio.h>

int main() {
    int limit;

    printf("Fibbonaci Sequence Solver\n");
    printf("Limit:");
    scanf("%d", &limit);
    // asks for the limitation of fibbonaci
    printf("Fibonacci sequence up to %d terms:\n", limit);

    for(int a = 1, b = 1, c = 1, d = 0; a <= limit; a++) {
        printf("%d\t", b);
        b = c + d;
        d = c;
        c = b;
    }
    // solves the fibbonaci sequence until the limit inputted by the user
    return 0;
}

