#include <stdio.h>

void swap_alternate_elements(int *array, int size) {
    int i;
  for (i = 0; i < size - 1; i += 2) {
    int temp = array[i];
    array[i] = array[i + 1];
    array[i + 1] = temp;
  }

  // Check if the array size is odd
  if (size % 2 == 1) {
    // Swap the last element with itself only if the array size is odd
    if (i == size - 2) {
      int temp = array[i];
      array[i] = array[i + 1];
      array[i + 1] = temp;
    }
  }
}

int main() {
  int size;
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int array[size];
  printf("Enter the elements of the array: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &array[i]);
  }

  swap_alternate_elements(array, size);
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
  return 0;
}
