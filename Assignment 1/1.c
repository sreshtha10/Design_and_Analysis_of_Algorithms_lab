//Binary Search
#include<stdio.h>

int binary_recursive(int arr[], int num, int start, int end) {
  if (start <= end) {
    int mid = end + (start - end) / 2;
    if (arr[mid] == num) {
      return mid;
    } else if (arr[mid] < num) {
      return binary_recursive(arr, num, mid + 1, end);
    } else {
      return binary_recursive(arr, num, start, mid - 1);
    }
  } else {
    return -1;
  }
}
int binary_iterative(int arr[], int num, int n) {
  int start = 0, end = n - 1;
  while (start <= end) {
    int mid = end + (start - end) / 2;
    if (arr[mid] == num) {
      return mid;
    } else if (arr[mid] < num) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  return -1;
}
int main() {
  int n, num;
  printf("Enter the size of the array: ");
  scanf("%d", & n);
  int arr[n];
  printf("Enter the array values(sorted) in ascending order\n");
  for (int i = 0; i < n; i++) {
    scanf("%d", & arr[i]);
  }
  printf("Enter the number to be searched: ");
  scanf("%d", & num);
  printf("Using recursive approach -> %d\n", binary_recursive(arr, num, 0, n1));
  printf("Using iterative approach -> %d\n", binary_iterative(arr, num, n));
  return 0;
}
