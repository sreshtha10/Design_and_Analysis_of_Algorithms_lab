//Radix Sort
#include<stdio.h>

void countSort(int arr[], int n, int divisor) {
  int output[n];
  int i, count[10] = {
    0
  };
  for (i = 0; i < n; i++)
    count[(arr[i] / divisor) % 10]++;
  for (i = 1; i < 10; i++)
    count[i] += count[i - 1];
  for (i = n - 1; i >= 0; i--) {
    output[count[(arr[i] / divisor) % 10] - 1] = arr[i];
    count[(arr[i] / divisor) % 10]--;
  }
  for (i = 0; i < n; i++)
    arr[i] = output[i];
}
void radix_sort(int arr[], int n) {
  int max = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  for (int i = 1; max / i > 0; i *= 10)
    countSort(arr, n, i);
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
  printf("----------------\nSorted Array\n---------------\n");
  radix_sort(arr, n);
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}
