/* Example: matrices represented by 2-dimensional arrays */

#include <stdio.h>
#include <string.h>
#define MATRIX_SIZE 3

void print_matrix(char label[], int matrix[][MATRIX_SIZE]) {
  int i, j;
  int padding = strlen(label);

  printf("%s", label);

  for (i = 0; i < MATRIX_SIZE; i++) {
    // Add padding to lines 2 and up
    if (i != 0) {
      for (j = 0; j < padding; j++) {
        printf(" ");
      }
    }

    // Opening bracket
    printf("[");

    // Print actual digits
    for (j = 0; j < MATRIX_SIZE; j++) {
      printf("%3i", matrix[i][j]);

      // Spacing between elements
      if (j != MATRIX_SIZE - 1) {
        printf("  ");
      }
    }

    // Closing bracket
    printf(" ]\n");
  }

  printf("\n");
}

void read_matrix(int matrix[][MATRIX_SIZE]) {
  int i, j;
  for (i = 0; i < MATRIX_SIZE; i++) {
    for (j = 0; j < MATRIX_SIZE; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }
}

main()
{
  int A[MATRIX_SIZE][MATRIX_SIZE];
  read_matrix(A);

  int B[MATRIX_SIZE][MATRIX_SIZE];
  read_matrix(B);

  int C[MATRIX_SIZE][MATRIX_SIZE];

  int i, j, k;

  print_matrix("A   = ", A);
  print_matrix("B   = ", B);

  /* multiply C = A.B: */

  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
    {
      C[i][j] = 0;
      for (k =0; k < 3; k++)
        C[i][j] += A[i][k] * B[k][j];
    }

  print_matrix("A.B = ", C);

  /* multiply C = B.A: */

  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
    {
      C[i][j] = 0;
      for (k =0; k < 3; k++)
        C[i][j] += B[i][k] * A[k][j];
    }

  print_matrix("B.A = ", C);
}
