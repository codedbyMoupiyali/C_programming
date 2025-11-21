#include <stdio.h>
#include <string.h>

void replaceSpacesWithHyphens(char *str) {
  if (str == NULL) {
    return;
  }

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == ' ') {
      str[i] = '-';
    }
  }
}

int main() {
  char str[] = "This is a string with spaces.";
  printf("Original string: %s\n", str);

  replaceSpacesWithHyphens(str);

  printf("Modified string: %s\n", str);

  return 0;
}