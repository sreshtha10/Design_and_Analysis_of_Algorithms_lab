//Home Assignment
#include<string.h>
#include<stdio.h>

struct Player {
  char name[50];
  int score;
};
// using insertion sort
void sort(struct Player * arr, int n) {
  for (int i = 1; i < n; i++) {
    int j = i - 1;
    struct Player temp = arr[i];
    while (j >= 0 && temp.score >= arr[j].score) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = temp;
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
