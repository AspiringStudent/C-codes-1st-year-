#include <stdio.h>
#include <stdbool.h>

// Function to check if a character is a letter
bool isLetter(char ch) {
  return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

// Function to check if a character is a vowel
bool isVowel(char ch) {
  return ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' ||
         ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U';
}

// Prints if the input is either Vowel, Consonant or neither
int main() {
  char ch;

  printf("Enter a letter: ");
  scanf("%c", &ch);

  if (!isLetter(ch)) {
    printf("INVALID INPUT!\n");
  }
  else {
    if (isVowel(ch)) {
      printf("VOWEL!\n");
    }
  else {
      printf("CONSONANT!\n");
    }
  }

  return 0;
}

