#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

char findFirstRepeatingLowercase(const char *str) {
  if (str == NULL) {
    return '\0';
  }

  int len = strlen(str);
  if (len == 0) {
    return '\0';
  }

  bool seen[26] = {false}; // Array to track seen lowercase letters

  for (int i = 0; i < len; i++) {
    if (islower(str[i])) {
      int index = str[i] - 'a'; // Calculate index for the letter

      if (seen[index]) {
        return str[i]; // Found a repeating lowercase letter
      } else {
        seen[index] = true; // Mark the letter as seen
      }
    }
  }

  return '\0'; // No repeating lowercase letter found
}

int main() {
  char str1[] = "abcdefghaklmnop";
  char str2[] = "AbcaDef";
  char str3[] = "No repeating letters";
  char str4[] = "AAAA";

  char result1 = findFirstRepeatingLowercase(str1);
  char result2 = findFirstRepeatingLowercase(str2);
  char result3 = findFirstRepeatingLowercase(str3);
  char result4 = findFirstRepeatingLowercase(str4);


  if (result1 != '\0') {
    printf("First repeating lowercase character in '%s': %c\n", str1, result1);
  } else {
    printf("No repeating lowercase character found in '%s'\n", str1);
  }

  if (result2 != '\0') {
    printf("First repeating lowercase character in '%s': %c\n", str2, result2);
  } else {
    printf("No repeating lowercase character found in '%s'\n", str2);
  }

    if (result3 != '\0') {
    printf("First repeating lowercase character in '%s': %c\n", str3, result3);
  } else {
    printf("No repeating lowercase character found in '%s'\n", str3);
  }

  if (result4 != '\0') {
    printf("First repeating lowercase character in '%s': %c\n", str4, result4);
  } else {
    printf("No repeating lowercase character found in '%s'\n", str4);
  }

  return 0;
}