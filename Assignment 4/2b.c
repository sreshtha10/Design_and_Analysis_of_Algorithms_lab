// Home Assignment B
#include<stdio.h>

void rearrange(int * arr, int n) {
  int i = -1;
  for (int j = 0; j < n; j++) {
    if (arr[j] <
      0) {
      i++;
      int tmp = arr[i];
      arr[i] = arr[j];
      arr[j] = tmp;
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
  printf("-------------\nRearranged Array\n----------------------\n");
  rearrange(arr, n);
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}
