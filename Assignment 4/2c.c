// Home Assignment C
#include<stdio.h>

void move_zeros(int * arr, int n) {
  int pivot = 0;
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] != 0) {
      int tmp = arr[i];
      arr[i] = arr[count];
      arr[count] = tmp;
      count++;
    }
  }
}
int main() {
  int n;
  printf("Enter the value of n\n");
  scanf("%d", & n);
  int arr[n];
  printf("Enter the array values\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", & arr[i]);
  }
  printf("-------------\nSorted Array\n----------------------\n");
  move_zeros(arr, n);
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}
