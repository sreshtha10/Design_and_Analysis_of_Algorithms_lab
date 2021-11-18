//Home Assignment
#include<string.h>

#include<stdio.h>

struct Player {
  char name[50];
  int score;
};
// using stable selection sort
void sort(struct Player * arr, int n) {
  for (int i = 0; i < n; i++) {
    int max = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j].score > arr[max].score) {
        max = j;
      }
    }
    struct Player key = arr[max];
    while (max > i) {
      arr[max] = arr[max - 1];
      max--;
    }
    arr[i] = key;
  }
}
int main() {
  int n;
  printf("Enter the number of players: ");
  scanf("%d", & n);
  printf("Enter player details\n-----------\n");
  struct Player arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%s", arr[i].name);
    scanf("%d", & arr[i].score);
  }
  sort(arr, n);
  printf("\n--------------\nName,Score\n");
  for (int i = 0; i < n; i++) {
    printf("%s,%d\n", arr[i].name, arr[i].score);
  }
}
