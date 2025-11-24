#include <stdio.h>

// 1. Define the Enum
enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    // We iterate through the enum values.
    // RED is 0, YELLOW is 1, GREEN is 2.
    enum TrafficLight signal;

    printf("--- Traffic Light Simulation ---\n");

    for (int i = RED; i <= GREEN; i++) {
        signal = i; // Assign integer i to the enum variable

        // 2. Check the value using switch
        switch (signal) {
            case RED:
                printf("Light is RED    : Stop\n");
                break;
            case YELLOW:
                printf("Light is YELLOW : Wait\n");
                break;
            case GREEN:
                printf("Light is GREEN  : Go\n");
                break;
            default:
                printf("Invalid Signal\n");
        }
    }

    return 0;
}