#include <stdio.h>
int main() {
    int groups[] = {4, 5, 3, 2};
    int num_groups = sizeof(groups) / sizeof(groups[0]);
    for (int i = 0; i < num_groups; i++) {
        for (int j = 0; j < groups[i]; j++) {
            printf("*\n");
        }
    }
    return 0;
}
