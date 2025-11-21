#include <stdio.h>
#include <string.h>
#include <ctype.h> // For tolower() if you want case-insensitive comparison

int isPalindrome(const char *str) {
  int len = strlen(str);
  int i, j;

  // Iterate from both ends of the string towards the center
  for (i = 0, j = len - 1; i < j; i++, j--) {
    // Compare characters
    if (str[i] != str[j]) {
      return 0; // Not a palindrome
    }
  }

  return 1; // It's a palindrome
}

// Case-insensitive palindrome check (optional)
int isPalindromeCaseInsensitive(const char *str) {
  int len = strlen(str);
  int i, j;

  for (i = 0, j = len - 1; i < j; i++, j--) {
    // Convert characters to lowercase for comparison
    if (tolower(str[i]) != tolower(str[j])) {
      return 0; // Not a palindrome
    }
  }

  return 1; // It's a palindrome
}

//Palindrome check ignoring non-alphanumeric characters

int isAlphanumeric(char c) {
    return (isalnum(c) != 0);
}


int isPalindromeIgnoreNonAlphanumeric(const char *str) {
    int len = strlen(str);
    int i = 0;
    int j = len - 1;

    while (i < j) {
        // Skip non-alphanumeric characters from the beginning
        while (i < len && !isAlphanumeric(str[i])) {
            i++;
        }

        // Skip non-alphanumeric characters from the end
        while (j >= 0 && !isAlphanumeric(str[j])) {
            j--;
        }

        // If either pointer goes out of bounds, it means the string is completely non-alphanumeric
        if (i >= len || j < 0) {
            return 1; // Consider empty or purely non-alphanumeric string as palindrome
        }

        // Compare alphanumeric characters (case-insensitive)
        if (tolower(str[i]) != tolower(str[j])) {
            return 0; // Not a palindrome
        }

        i++;
        j--;
    }

    return 1; // It's a palindrome
}


int main() {
  char str1[] = "madam";
  char str2[] = "racecar";
  char str3[] = "hello";
  char str4[] = "A man, a plan, a canal: Panama";
  char str5[] = "Was it a car or a cat I saw?";


  printf("\"%s\" is %sa palindrome.\n", str1, isPalindrome(str1) ? "" : "not ");
  printf("\"%s\" is %sa palindrome.\n", str2, isPalindrome(str2) ? "" : "not ");
  printf("\"%s\" is %sa palindrome.\n", str3, isPalindrome(str3) ? "" : "not ");

  printf("\"%s\" is %sa palindrome (case-insensitive).\n", str1, isPalindromeCaseInsensitive(str1) ? "" : "not ");
  printf("\"%s\" is %sa palindrome (case-insensitive).\n", str3, isPalindromeCaseInsensitive(str3) ? "" : "not ");
  printf("\"%s\" is %sa palindrome (case-insensitive, ignore non-alphanumeric).\n", str4, isPalindromeIgnoreNonAlphanumeric(str4) ? "" : "not ");
  printf("\"%s\" is %sa palindrome (case-insensitive, ignore non-alphanumeric).\n", str5, isPalindromeIgnoreNonAlphanumeric(str5) ? "" : "not ");


  return 0;
}