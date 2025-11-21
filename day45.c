#include <stdio.h>
#include <string.h>

int countFrequency(const char *str, char ch) {
  int count = 0;
  if (str == NULL) {
    return 0;
  }

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == ch) {
      count++;
    }
  }
  return count;
}

int main() {
  char str[] = "Hello, world!";
  char ch = 'l';
  int frequency = countFrequency(str, ch);

  printf("String: %s\n", str);
  printf("Character: %c\n", ch);
  printf("Frequency: %d\n", frequency);

  return 0;
}