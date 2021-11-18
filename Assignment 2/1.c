// Insertion short
#include<stdio.h>

void insertion_sort(int * arr, int n) {
  for (int i = 1; i < n; i++) {
    int j = i - 1, temp = arr[i];
    while (j >= 0 && temp <= arr[j]) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = temp;
  }
  return;
}
int main() {
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", & n);
  int arr[n];
  printf("Enter the elements\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", & arr[i]);
  }
  insertion_sort(arr, n);
  printf("Sorted Array\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}
