#include <stdio.h>
#include "../src/calculator.h"
#include <assert.h>

void test_add() {
  assert(add(2, 3) == 5);
  assert(add(-1, 1) == 0);
  printf("All addition tests passed.\n");
}

void test_subtract() {
  assert(subtract(5, 3) == 2);
  assert(subtract(0, 5) == -5);
  printf("All subtraction tests passed.\n");
}

void test_multiply() {
  assert(multiply(3, 4) == 12);
  assert(multiply(0, 5) == 0);
  printf("All multiplication tests passed.\n");
}

void test_divide() {
  assert(divide(6, 3) == 2);
  printf("All division tests passed.\n");
}

int main() {
  test_add();
  test_subtract();
  test_multiply();
  test_divide();
  return 0;
}