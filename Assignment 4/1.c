#include<stdio.h>

int sort(int * arr, int i, int j, int n) {
  if (i == j) {
    return j;
  }
  int pivot = i;
  while (1) {
    while (arr[j] > arr[pivot] && j > pivot) {
      j--;
    }
    while (arr[i] < arr[pivot] && i < n) {
      i++;
    }
    if (j == pivot || i == n) {
      break;
    }
    if (i < j) {
      int tmp = arr[i];
      arr[i] = arr[j];
      arr[j] = tmp;
      continue;
    } else {
      int tmp = arr[pivot];
      arr[pivot] = arr[j];
      arr[j] = tmp;
      break;
    }
  }
  return j;
}
void quick_sort(int * arr, int n, int i, int j) {
  if (i < j) {
    int partition = sort(arr, i, j, n);
    quick_sort(arr, n, i, partition - 1);
    quick_sort(arr, n, partition + 1, n - 1);
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
  quick_sort(arr, n, 0, n - 1);
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}
