#include <stdio.h>

// 1. Define the Enum
enum UserRole {
    ADMIN,  // Defaults to 0
    USER,   // Defaults to 1
    GUEST   // Defaults to 2
};

int main() {
    enum UserRole role;

    printf("--- User Role Verification ---\n");

    // 2. Iterate through all roles to verify logic for each
    for (int i = ADMIN; i <= GUEST; i++) {
        role = i; // Cast integer to enum type

        printf("Role ID %d: ", role);

        // 3. Switch based on the Enum value
        switch (role) {
            case ADMIN:
                printf("Welcome, Admin. You have FULL system access.\n");
                break;

            case USER:
                printf("Welcome, User. You can browse and edit your profile.\n");
                break;

            case GUEST:
                printf("Welcome, Guest. You have read-only access.\n");
                break;

            default:
                printf("Error: Role undefined.\n");
        }
    }

    return 0;
}