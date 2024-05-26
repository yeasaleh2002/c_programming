#include <stdio.h>

int main() {
  int time;

  printf("Enter an integer\n");
  scanf("%d", &time);
  if (time < 0){
      printf("Wrong Number.");
  }
 else if (time < 10) {
    printf("Good morning.");
  } else if (time < 20) {
    printf("Good day.");
  } else if (time > 23){
      printf("Wrong Number.");
  } else {
    printf("Good evening.");
  }
  return 0;
}
