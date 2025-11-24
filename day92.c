#include <stdio.h>

// 1. Define the structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    // 2. Create an array of structures
    // This creates 5 separate instances of 'struct Student' indexed 0 to 4
    struct Student students[5]; 
    int i;

    // 3. Loop to read data
    printf("Enter details for 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\n--- Student %d ---\n", i + 1);
        
        printf("Enter Name: ");
        scanf("%s", students[i].name); // Accessing the name of the student at index 'i'
        
        printf("Enter Roll No: ");
        scanf("%d", &students[i].roll_no); // Accessing roll_no at index 'i'
        
        printf("Enter Marks: ");
        scanf("%f", &students[i].marks); // Accessing marks at index 'i'
    }

    // 4. Loop to print data
    printf("\n\n==============================\n");
    printf("    LIST OF ALL STUDENTS      \n");
    printf("==============================\n");
    
    for (i = 0; i < 5; i++) {
        printf("Student %d: %-10s | Roll: %d | Marks: %.2f\n", 
               i + 1, 
               students[i].name, 
               students[i].roll_no, 
               students[i].marks);
    }

    return 0;
}