/* Example: matrices represented by 2-dimensional arrays */

#include <stdio.h>
#define MATRIX_SIZE 3

void print_matrix(char label[], int matrix[][MATRIX_SIZE]) {
  int i, j;

  printf("%s\n", label);

  for (i = 0; i < MATRIX_SIZE; i++) {
    for (j = 0; j < MATRIX_SIZE; j++) {
      printf("%3s%3i", "", matrix[i][j]);
    }

    printf("\n");
  }
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

  printf("Please enter the values for A[0..2][0..2], one row per line:\n");
  read_matrix(A);

  int B[MATRIX_SIZE][MATRIX_SIZE];

  printf("Please enter the values for B[0..2][0..2], one row per line:\n");
  read_matrix(B);

  int C[MATRIX_SIZE][MATRIX_SIZE];

  int i, j, k;

  print_matrix("A=", A);
  print_matrix("B=", B);

  /* multiply C = A.B: */

  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
    {
      C[i][j] = 0;
      for (k =0; k < 3; k++)
        C[i][j] += A[i][k] * B[k][j];
    }

  print_matrix("C=A.B=", C);

  /* multiply C = B.A: */

  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
    {
      C[i][j] = 0;
      for (k =0; k < 3; k++)
        C[i][j] += B[i][k] * A[k][j];
    }

  print_matrix("C=B.A=", C);
}
