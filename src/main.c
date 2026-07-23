#include <unistd.h> // For write()

#define LIMIT_TEST 19 // Added a char limit for the project

typedef struct Var {
  char Testing[LIMIT_TEST];
} Var; // Typedef name

void call(char string[LIMIT_TEST]) {
  printf("%s", string);
}

int main() {
  // Use Variable1 (or struct Variables1)
  Var writing = {"Testing...testing\n"};
  Var *ptr = &writing;

  call(ptr->Testing);
  return 0;
}
