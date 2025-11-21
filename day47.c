#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define ALPHABET_SIZE 26

bool areAnagrams(const char *str1, const char *str2) {
  if (str1 == NULL || str2 == NULL) {
    return false;
  }

  int len1 = strlen(str1);
  int len2 = strlen(str2);

  if (len1 != len2) {
    return false;
  }

  int charCounts[ALPHABET_SIZE] = {0};

  // Count character frequencies in the first string
  for (int i = 0; i < len1; i++) {
    if (isalpha(str1[i])) {
      char lowerChar = tolower(str1[i]);
      charCounts[lowerChar - 'a']++;
    }
  }

  // Decrement character frequencies based on the second string
  for (int i = 0; i < len2; i++) {
    if (isalpha(str2[i])) {
      char lowerChar = tolower(str2[i]);
      charCounts[lowerChar - 'a']--;
    }
  }

  // Check if all character counts are zero
  for (int i = 0; i < ALPHABET_SIZE; i++) {
    if (charCounts[i] != 0) {
      return false;
    }
  }

  return true;
}

int main() 
  char str1[] = "listen";
  char str2[] = "silent";
  char str3[] = "hello";
  char str4[] = "world";
  char str5[] = "Debit Card";
  char str6[] = "Bad Credit";

  printf("\"%s\" and \"%s\" are anagrams: %s\n", str1, str2, areAnagrams(str1, str2)) ? "true" : 