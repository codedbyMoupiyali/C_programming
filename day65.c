#include <stdio.h>
#include <string.h>

int main() {
    char s[1001], t[1001];
    int frequency[26] = {0}; // Initialize all counts to 0
    int flag = 1; // 1 assumes they are anagrams, 0 means they are not

    // Input the two strings
    // Using scanf assumes single words without spaces
    printf("Enter first string: ");
    scanf("%s", s);
    
    printf("Enter second string: ");
    scanf("%s", t);

    // Step 1: Check if lengths are different
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    // Step 2: Calculate frequencies
    // We iterate once. We add for string 's' and subtract for string 't'.
    for (int i = 0; s[i] != '\0'; i++) {
        frequency[s[i] - 'a']++; // Increment for char in s
        frequency[t[i] - 'a']--; // Decrement for char in t
    }

    // Step 3: Check if all frequencies are zero
    for (int i = 0; i < 26; i++) {
        if (frequency[i] != 0) {
            flag = 0; // Found a discrepancy
            break;
        }
    }

    // Step 4: Print result
    if (flag) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}