/* Example: analysis of text */

#include <stdio.h>
#include <string.h>

#define MAX 1000 /* The maximum number of characters in a line of input */

main()
{
  char text[MAX], reversed[MAX], c;
  int i, length, palindrome;

  puts("Type some text (then ENTER):");

  /* Save typed characters in text[]: */

  fgets(text, MAX, stdin);
  length = strlen(text) - 1;

  /* Analyse contents of text[]: */

  for (i = 0; i < MAX; i++)
  {
    c = text[i];

    /* Copy current char into reversed array */
    reversed[length - i - 1] = c;

    /* Break if we've reached the end of the string */
    if (c == '\n')
      break;
  }

  /* Palindrome check */
  palindrome = 1;
  for (i = 0; i < length; i++) {
    if (text[i] != text[length - i - 1]) {
      palindrome = 0;
    }
  }

  printf("Your input in reverse is:\n%s\n", reversed);

  if (palindrome) {
    printf("Found a palindrome!\n");
  }
}
