/* Example: analysis of text */

#include <stdio.h>
#include <string.h>

#define MAX 1000 /* The maximum number of characters in a line of input */

main()
{
  char text[MAX];
  int i, length, palindrome;

  puts("Type some text (then ENTER):");

  /* Save typed characters in text[]: */

  fgets(text, MAX, stdin);
  length = strlen(text) - 1;

  printf("Your input in reverse is:\n");

  /* Print and check for palindrome */
  palindrome = 1;
  for (i = length - 1; i >= 0; i--) {
    if (text[i] != text[length - i - 1]) {
      palindrome = 0;
    }

    printf("%c", text[i]);
  }

  printf("\n");

  if (palindrome) {
    printf("Found a palindrome!\n");
  }
}
