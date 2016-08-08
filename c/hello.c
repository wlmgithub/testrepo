#include <stdio.h>

void sayhi(char *);

int main(int argc, char *argv[]) {
  sayhi("hello");
  return 0;
}

void sayhi(char *msg) {
  printf("%s\n", msg);
}
