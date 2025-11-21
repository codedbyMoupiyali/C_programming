#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void printInitialsWithSurname(const char *name) {
  if (name == NULL) {
    return;
  }

  int len = strlen(name);
  if (len == 0) {
    return;
  }

  int i = 0;
  int wordCount = 0;
  int lastSpaceIndex = -1;

  // Find the index of the last space in the name.
  for (i = 0; i < len; i++) {
    if (isspace(name[i])) {
      lastSpaceIndex = i;
      wordCount++;
    }
  }

  // Print initials for all but the last name
  if (lastSpaceIndex != -1) {
    printf("%c. ", toupper(name[0]));
    for (i = 1; i < lastSpaceIndex; i++) {
      if (isspace(name[i - 1]) && isalpha(name[i])) {
        printf("%c. ", toupper(name[i]));
      }
    }
    printf("%s", name + lastSpaceIndex + 1); // Print the surname
  } else {
    printf("%s", name); // Only surname present
  }
  printf("\n");
}

int main() {
  char name1[] = "john doe";
  char name2[] = "Mary Jane Smith";
  char name3[] = "  Robert  Paulson  ";
  char name4[] = "Alice";
  char name5[] = "   ";
  char name6[] = "";
  char name7[] = NULL;
  char name8[] = "John Smith Doe";

  printf("Name: %s, Formatted Name: ", name1);
  printInitialsWithSurname(name1);

  printf("Name: %s, Formatted Name: ", name2);
  printInitialsWithSurname(name2);

  printf("Name: %s, Formatted Name: ", name3);
  printInitialsWithSurname(name3);

  printf("Name: %s, Formatted Name: ", name4);
  printInitialsWithSurname(name4);

  printf("Name: %s, Formatted Name: ", name5);
  printInitialsWithSurname(name5);

  printf("Name: %s, Formatted Name: ", name6);
  printInitialsWithSurname(name6);

  printf("Name: %s, Formatted Name: ", name7);
  printInitialsWithSurname(name7);

  printf("Name: %s, Formatted Name: ", name8);
  printInitialsWithSurname(name8);

  return 0;
}