#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch); 
    char lowerCh = tolower(ch);
    if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
        printf("%c is a vowel.\n", ch);
    } else if (isalpha(ch)) {  // Check if it's an alphabet
        printf("%c is a consonant.\n", ch);
    } else {
        printf("%c is not an alphabet.\n", ch);
    }
    
    return 0;
}
