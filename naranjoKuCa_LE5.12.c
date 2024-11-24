/*
============================================================================
FILE : naranjoKuCa_LE5.12
AUTHOR : Kurt Casey V. Naranjo
DESCRIPTION : Gets 10 integers and get the average of even and the product of odd inputs
COPYRIGHT : created
REVISION HISTORY
Date: October 1, 2023 By: Kurt Casey V. Naranjo Description: Everything
============================================================================
*/
/*
============================================================================
FUNCTION : Average of Even Numbers and Product of Odd Numbers
DESCRIPTION : Gets 10 integers and get the average of even and the product of odd inputs
ARGUMENTS :
int userPassword = 123 - implies a designated password which is 123
int attempts = signifies user's attempts
int passwordAttempts = the user's inputted attempt on the password to log in
RETURNS : void
===========================================================================
*/
#include <stdio.h>

int main() {
  int userPassword = 123;
  int attempts = 0;

  while (attempts < 3) {
    printf("Password:");
    int passwordAttempt;
    scanf("%d", &passwordAttempt);

    if (passwordAttempt == userPassword) {
      printf("ACCESS GRANTED");
      break;
    } else {
      printf("INCORRECT PASSWORD\n");
      attempts++;
    }
  }

  if (attempts == 3) {
    printf("ACCESS DENIED");
  }

  return 0;
}
