// Count Sort
#include<stdlib.h>

#include<stdio.h>

int * count_sort(int * arr, int n) {
  int max = arr[0];
  // finding maximum element
  for (int i = 0; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  int * op = (int * ) malloc(n * sizeof(int));
  int count[max + 1];
  // initialize every element of count array by 0
  for (int i = 0; i <= max; i++) {
    count[i] = 0;
  }
  // calculate no of occurence of each element in original array
  for (int i = 0; i < n; i++) {
    count[arr[i]]++;
  }
  // calculating cummulative sum
  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }
  for (int i = 0; i < n; i++) {
    int index = count[arr[i]] - 1;
    op[index] = arr[i];
  }
  return op;
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
  int * op = count_sort(arr, n);
  for (int i = 0; i < n; i++) {
    printf("%d ", op[i]);
  }
}
