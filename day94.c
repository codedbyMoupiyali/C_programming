#include <stdio.h>

// 1. Define the structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// 2. Define the function
// This function accepts a variable of type 'struct Student' named 's'
void printStudent(struct Student s) {
    printf("\n--- Student Details ---\n");
    printf("Name:    %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks:   %.2f\n", s.marks);
}

int main() {
    // 3. Create and initialize the structure
    struct Student s1;
    
    // Hardcoding values for demonstration (you could also use scanf)
    sprintf(s1.name, "Alice"); 
    s1.roll_no = 101;
    s1.marks = 89.5;

    // 4. Call the function and pass the structure 's1'
    printStudent(s1);

    return 0;
}