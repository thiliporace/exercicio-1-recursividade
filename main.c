#include <stdio.h>

int recursividade(int a, int b) {
  if (b == 1)
    return a;
  else
    return recursividade(a, b - 1) + a;
}

int main() {
  int a, b;
  scanf("%i", &a);
  scanf("%i", &b);
  int c = recursividade(a, b);
  printf("%i", c);
}