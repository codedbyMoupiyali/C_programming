#include <stdio.h>
#include <string.h>

void printAllSubstrings(const char *str) {
    if (str == NULL) {
        return;
    }

    int len = strlen(str);
    if (len == 0) {
        return;
    }

    // First print all substrings of length 1, then 2, and so on
    for (int length = 1; length <= len; length++) {
        printf("\nSubstrings of length %d:\n", length);
        
        // Start index of substring
        for (int start = 0; start <= len - length; start++) {
            // Print characters from start to start+length-1
            for (int i = start; i < start + length; i++) {
                printf("%c", str[i]);
            }
            printf("\n");
        }
    }
}

// Alternative version that uses a temporary buffer
void printAllSubstringsWithBuffer(const char *str) {
    if (str == NULL) {
        return;
    }

    int len = strlen(str);
    if (len == 0) {
        return;
    }

    char substring[100]; // Ensure this is large enough for your needs
    
    for (int length = 1; length <= len; length++) {
        printf("\nSubstrings of length %d:\n", length);
        
        for (int start = 0; start <= len - length; start++) {
            strncpy(substring, &str[start], length);
            substring[length] = '\0'; // Null terminate the substring
            printf("%s\n", substring);
        }
    }
}

int main() {
    char str1[] = "abc";
    char str2[] = "test";
    char str3[] = "a";
    char str4[] = "";
    char *str5 = NULL;

    printf("Substrings of \"%s\":\n", str1);
    printAllSubstrings(str1);

    printf("\n\nSubstrings of \"%s\":\n", str2);
    printAllSubstrings(str2);

    