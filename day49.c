#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printInitials(const char *name) {
    if (name == NULL) {
        return;
    }

    int len = strlen(name);
    if (len == 0) {
        return;
    }

    printf("%c", toupper(name[0]));

    for (int i = 1; i < len; i++) {
        if (isspace(name[i - 1]) && isalpha(name[i])) {
            printf("%c", toupper(name[i]));
        }
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


    printf("Name: %s, Initials: ", name1);
    printInitials(name1);

    printf("Name: %s, Initials: ", name2);
    printInitials(name2);

    printf("Name: %s, Initials: ", name3);
    printInitials(name3);

    printf("Name: %s, Initials: ", name4);
    printInitials(name4);

    printf("Name: %s, Initials: ", name5);
    printInitials(name5);

    printf("Name: %s, Initials: ", name6);
    printInitials(name6);

    printf("Name: %s, Initials: ", name7);
    printInitials(name7);

    return 0;
}