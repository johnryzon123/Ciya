#include <unistd.h> // For write()

#define LIMIT_TEST 19 // Added a char limit for the project

typedef struct Var {
  char Testing[LIMIT_TEST];
  int Size;
} Var; // Typedef name

int main() {
  // Use Variable1 (or struct Variables1)
  Var writing = {"Testing...testing\n", 19}; 
  Var *ptr = &writing;

  write(1, ptr->Testing, ptr->Size); 
  
  return 0;
}
