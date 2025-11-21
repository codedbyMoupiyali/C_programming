#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isRotation(const char *str1, const char *str2) {
  if (str1 == NULL || str2 == NULL) {
    return false;
  }

  int len1 = strlen(str1);
  int len2 = strlen(str2);

  if (len1 != len2 || len1 == 0) {
    return false;
  }

  // Concatenate str1 with itself
  char temp[2 * len1 + 1];
  strcpy(temp, str1);
  strcat(temp, str1);

  // Check if str2 is a substring of temp
  if (strstr(temp, str2) != NULL) {
    return true;
  } else {
    return false;
  }
}

int main() {
  char str1[] = "ABCD";
  char str2[] = "CDAB";
  char str3[] = "ACBD";
  char str4[] = "ABCD";
  char str5[] = "BCDA";

  printf("\"%s\" is a rotation of \"%s\": %s\n", str1, str2, isRotation(str1, str2) ? "true" : "false");
  printf("\"%s\" is a rotation of \"%s\": %s\n", str1, str3, isRotation(str1, str3) ? "true" : "false");
  printf("\"%s\" is a rotation of \"%s\": %s\n", str1, str4, isRotation(str1, str4) ? "true" : "false");
  printf("\"%s\" is a rotation of \"%s\": %s\n", str1, str5, isRotation(str1, str5) ? "true" : "false");

  return 0;
}