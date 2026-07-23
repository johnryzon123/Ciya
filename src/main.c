#include <unistd.h> // For write()

#define LIMIT_TEST 19 // Added a char limit for the project

typedef struct Var {
  char Testing[LIMIT_TEST];
  int Size;
} Var; // Typedef name

void call(char string[LIMIT_TEST], int Size) {
  write(1, string, Size);
}

int main() {
  // Use Variable1 (or struct Variables1)
  Var writing = {"Testing...testing\n", 19};
  Var *ptr = &writing;

  call(ptr->Testing, ptr->Size);
  return 0;
}
