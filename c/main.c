#include <stdio.h>

int main() {
  char buf[64];
  printf("Please rnter your name: ");
  scanf_s("%s", &buf);

  printf("\n");
  printf("If you read this, you lost the Game.\n");
  printf("Hello! My name is %s. I just lost the game. Incredible. yuh\n", buf);

  return 0;
}
