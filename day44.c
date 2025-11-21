#include <stdio.h>
#include <string.h>
#include <ctype.h>

void countChars(const char *str, int *spaces, int *digits, int *special) {
  *spaces = 0;
  *digits = 0;
  *special = 0;

  for (int i = 0; str[i] != '\0'; i++) {
    if (isspace(str[i])) {
      (*spaces)++;
    } else if (isdigit(str[i])) {
      (*digits)++;
    } else if (!isalnum(str[i])) {
      (*special)++;
    }
  }
}

int main() {
  char str[] = "Hello, World! 123";
  int spaces, digits, special;

  countChars(str, &spaces, &digits, &special);

  printf("String: %s\n", str);
  printf("Spaces: %d\n", spaces);
  printf("Digits: %d\n", digits);
  printf("Special characters: %d\n", special);

  return 0;
}