#include <stdio.h>

int extractFirstLSD(int num);
int extractSecondLSD(int num);
int sumDigits(int x, int y);

int main(){
int num, sum, firstLSD, secondLSD;
    printf("Enter a number:");
    scanf("%d", &num);
    if(num < 0)
        num *= -1;
    firstLSD = extractFirstLSD(num);
    secondLSD = extractSecondLSD(num);
    sum = sumDigits(firstLSD, secondLSD);
    printf("Sum: %d + %d = %d", secondLSD, firstLSD, sum);

    return 0;
}

int extractFirstLSD(int num){
    int firstLSD = num%10;
    return firstLSD;
}

int extractSecondLSD(int num){
    int secondLSD = (num/10)%10;
    return secondLSD;
}
// gets
int sumDigits(int x, int y){
    int sum = x + y;
    return sum;
}
