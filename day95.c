#include <stdio.h>

// 1. Define the Structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// 2. Define the function that returns a structure
// Return Type: 'struct Student'
// Parameters: An array of students 's[]' and the number of students 'count'
struct Student getTopStudent(struct Student s[], int count) {
    // Assume the first student is the topper initially
    struct Student bestStudent = s[0]; 

    for (int i = 1; i < count; i++) {
        if (s[i].marks > bestStudent.marks) {
            // If we find a student with higher marks, 
            // copy that student's data into bestStudent
            bestStudent = s[i]; 
        }
    }
    
    // Return the full structure copy of the topper
    return bestStudent;
}

int main() {
    // 3. Initialize an array of students
    // We are using initialization lists here for cleaner code, 
    // but you could also use scanf.
    struct Student myClass[3] = {
        {"Alice", 101, 78.5},
        {"Bob", 102, 92.0},
        {"Charlie", 103, 85.4}
    };

    // 4. Call the function
    // The function returns a structure, which we capture in the variable 'topper'
    struct Student topper = getTopStudent(myClass, 3);

    // 5. Print the returned data
    printf("--- Result ---\n");
    printf("The Top Student is:\n");
    printf("Name: %s\n", topper.name);
    printf("Roll No: %d\n", topper.roll_no);
    printf("Marks: %.2f\n", topper.marks);

    return 0;
}