#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    int i;
    int max_index = 0; // This variable stores the index (position) of the topper

    // 1. Read data for 5 students
    printf("Enter details for 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // 2. Find the student with the highest marks
    // We start the loop at 1 because we assumed index 0 is the max initially
    for (i = 1; i < 5; i++) {
        if (students[i].marks > students[max_index].marks) {
            max_index = i; // Update the index to the new highest student
        }
    }

    // 3. Print the result
    printf("\n===================================\n");
    printf("       STUDENT WITH HIGHEST MARKS    \n");
    printf("===================================\n");
    printf("Name:    %s\n", students[max_index].name);
    printf("Roll No: %d\n", students[max_index].roll_no);
    printf("Marks:   %.2f\n", students[max_index].marks);

    return 0;
}