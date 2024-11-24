/*
============================================================================
FILE : naranjoKuCa_LE4.11
AUTHOR : Kurt Casey V. Naranjo
DESCRIPTION : Vowel or Consonants Identifier
COPYRIGHT : created
REVISION HISTORY
Date: September 20, 2023 By: Kurt Casey V. Naranjo Description: Everything
============================================================================
*/
/*
============================================================================
FUNCTION : Vowels or consonants Identifier
DESCRIPTION : Identifies the input as vowel or consonant
ARGUMENTS :
char letter = defines the letter
RETURNS : void
===========================================================================
*/

int main()
{
    char letter;

    printf("Input a letter in the alphabet: ");
    scanf("%c", &letter);
    // get user's input as letter
    if (letter == 'a' || letter == 'A' || letter == 'e' || letter == 'E' || letter == 'i' || letter == 'I' || letter == 'o' || letter == 'O' || letter == 'u' || letter == 'U') {
    printf("The letter is a vowel\n");
    // assess the input as a vowel
  } else if (letter >= 'a' && letter <= 'z' || letter >= 'A' && letter <= 'Z')
    //define the letter from small letter a to z or big letter A to Z as consonant
  {
    printf("The letter is a consonant\n");
  }
    // assess the input as a consonant
    else {
    printf("INVALID INPUT\n");
  }
    // displays invalid output when user inputs a non-letter
  return 0;
}
