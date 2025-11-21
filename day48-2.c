#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char *start, char *end) {
  char temp;
  while (start < end) {
    temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }
}

void reverseWordsInSentence(char *sentence) {
  if (sentence == NULL) {
    return;
  }

  char *wordStart = sentence;
  char *wordEnd = sentence;

  while (*wordEnd) {
    if (*wordEnd == ' ') {
      reverseWord(wordStart, wordEnd - 1);
      wordStart = wordEnd + 1;
    }
    wordEnd++;
  }

  // Reverse the last word
  reverseWord(wordStart, wordEnd - 1);
}

int main() {
  char sentence[] = "This is a sentence";
  printf("Original sentence: %s\n", sentence);

  reverseWordsInSentence(sentence);

  printf("Reversed sentence: %s\n", sentence);

  return 0;
}