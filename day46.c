#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isVowel(char c) {
  c = tolower(c); // Make case-insensitive
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void removeVowels(char *str) {
    if (str == NULL) {
        return;
    }

    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (!isVowel(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // Null-terminate the modified string
}


int main() {
  char str[] = "Hello, World!";
  printf("Original string: %s\n", str);

  removeVowels(str);

  printf("Modified string: %s\n", str);

  return 0;
}