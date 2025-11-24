#include <stdio.h>
#include <string.h>

// 1. Define the Enum
typedef enum {
    MALE,
    FEMALE,
    OTHER
} Gender;

// 2. Define the Struct
typedef struct {
    char name[50];
    int age;
    Gender gender; // The struct contains the enum
} Person;

// Helper function to convert Enum value to String
const char* getGenderString(Gender g) {
    switch (g) {
        case MALE: return "Male";
        case FEMALE: return "Female";
        case OTHER: return "Other";
        default: return "Unknown";
    }
}

int main() {
    // 3. Create and initialize a Person variable
    Person person1;
    
    strcpy(person1.name, "Alice");
    person1.age = 30;
    person1.gender = FEMALE; // Assigning the enum value

    Person person2;
    strcpy(person2.name, "Bob");
    person2.age = 25;
    person2.gender = MALE;

    // 4. Print the details
    // We use the helper function to print the string representation
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Gender: %s\n", getGenderString(person1.gender));

    printf("\n");

    printf("Name: %s\n", person2.name);
    printf("Age: %d\n", person2.age);
    printf("Gender: %s\n", getGenderString(person2.gender));

    return 0;
}