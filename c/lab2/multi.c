#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int rows = 4;
  int cols = 4;
  int **matrix = (int **)malloc(rows * sizeof(int *));

  // allocate memory for rows
  for (int i = 0; i < rows; i++) {
    matrix[i] = (int *)malloc(cols * sizeof(int));
  }

  // create cols for each row and take input
  for (int i = 0; i < rows; i++) {
    printf("Enter for Row %d\n", i + 1);
    for (int j = 0; j < cols; j++) {
      printf("Enter for col %d : ", j + 1);
      scanf("%d", &matrix[i][j]);
    }
  }

  // printing

  for (int i = 0; i < rows; i++) {
    printf("Row %d : ", i + 1);
    for (int j = 0; j < cols; j++) {
      printf("  %d  ", matrix[i][j]);
    }
    printf("\n");
  }

  return 0;
}
