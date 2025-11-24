#include <stdio.h>
#include <string.h>

int main() {
    char s[100001]; // Assuming max length 100000
    scanf("%s", s);
    int n = strlen(s);
    
    int visited[256] = {0};
    int max_len = 0;
    int i = 0, j = 0;
    
    while(j < n) {
        if(visited[s[j]] == 0) {
            visited[s[j]] = 1;
            if(j - i + 1 > max_len) {
                max_len = j - i + 1;
            }
            j++;
        } else {
            visited[s[i]] = 0;
            i++;
        }
    }
    
    printf("%d\n", max_len);
    return 0;
}
