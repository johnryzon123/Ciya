#include <stdio.h> //For printf()

#define LIMIT_TEST 19 // Added a char limit for the project

typedef struct Var {
  char Testing[LIMIT_TEST];
} Var; // Typedef name

void call(const char *string) { //Function to call
  printf("%s", string);
}

int main() {
  // Use Variable1 (or struct Variables1)
  Var writing = {"Testing...testing\n"};
  Var *ptr = &writing;

  call(ptr->Testing);
  return 0;
}
