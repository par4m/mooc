#include "stdio.h"
#include "stdlib.h"

int main(int argc, char *argv[]) {
  int i, n;
  printf("Enter the number of integers : ");
  scanf("%d", &n);
  int *ptr = (int *)malloc(sizeof(int));
  if (ptr == NULL) {
    printf("Memory Not Available");
    exit(1);
  }
  for (i = 0; i < n; i++) {
    printf("\nEnter an Integer: ");
    scanf("%d", ptr + i);
  }
  for (int i = 0; i < n; i++) {
    printf("%d\t", *(ptr + i));
  }

  return 0;
}
