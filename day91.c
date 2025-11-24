#include <stdio.h>

// 1. Define the Structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    // 2. Declare a variable of type 'struct Student'
    struct Student s1;

    // 3. Read data from the user
    printf("Enter student name: ");
    scanf("%s", s1.name); // Note: %s reads a single word (no spaces)

    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    // 4. Print the data
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s1.name);
    printf("Roll No: %d\n", s1.roll_no);
    printf("Marks: %.2f\n", s1.marks); // %.2f prints 2 decimal places

    return 0;
}