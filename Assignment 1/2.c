//Binary Search
#include<stdio.h>

int first_occurence(int arr[], int num, int start, int end) {
  if (start <= end) {
    int mid = end + (start - end) / 2;
    if ((mid == 0 || num > arr[mid - 1]) && arr[mid] == num) {
      return mid;
    } else if (num > arr[mid]) {
      return first_occurence(arr, num, mid + 1, end);
    } else {
      return first_occurence(arr, num, start, mid - 1);
    }
  }
  return -1;
}
int last_occurence(int arr[], int num, int start, int end, int n) {
  if (start <= end) {
    int mid = end + (start - end) / 2;
    if ((mid == n || num < arr[mid + 1]) && arr[mid] == num) {
      return mid;
    } else if (num > arr[mid]) {
      return last_occurence(arr, num, mid + 1, end, n);
    } else {
      return last_occurence(arr, num, start, mid - 1, n);
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
  printf("Enter the number: ");
  scanf("%d", & num);
  int result[2] = {
    first_occurence(arr, num, 0, n - 1),
    last_occurence(arr, num, 0, n - 1, n - 1)
  };
  printf("[%d,%d]", result[0], result[1]);
  return 0;
}
