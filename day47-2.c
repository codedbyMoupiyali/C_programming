#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findLongestWord(const char *sentence, char *longestWord) {
    if (sentence == NULL || longestWord == NULL) {
        longestWord[0] = '\0'; // Set to empty string if input is invalid
        return;
    }

    longestWord[0] = '\0'; // Initialize longestWord to an empty string
    int longestLength = 0;

    char currentWord[100]; // Assuming a maximum word length of 99
    int currentLength = 0;

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (isalnum(sentence[i])) {
            currentWord[currentLength] = sentence[i];
            currentLength++;
        } else {
            if (currentLength > 0) {
                currentWord[currentLength] = '\0'; // Null-terminate current word
                if (currentLength > longestLength) {
                    longestLength = currentLength;
                    strcpy(longestWord, currentWord);
                }
                currentLength = 0; // Reset current word length
            }
        }
    }

    // Check for the last word in the sentence (if any)
    if (currentLength > 0) {
        currentWord[currentLength] = '\0';
        if (currentLength > longestLength) {
            strcpy(longestWord, currentWord);
        }
    }
}

int main() {
    char sentence[] = "This is a sentence with some very long words.";
    char longestWord[100]; // Array to store the longest word

    findLongestWord(sentence, longestWord);

    printf("Sentence: %s\n", sentence);
    printf("Longest word: %s\n", longestWord);

    return 0;
}