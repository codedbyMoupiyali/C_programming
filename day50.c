#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char *getMonthName(int month) {
    const char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

    if (month >= 1 && month <= 12) {
        return months[month - 1];
    } else {
        return NULL; // Or handle invalid month as needed
    }
}


void formatDate(char *dateString) {
    if (dateString == NULL) {
        return;
    }

    int day, month, year;
    if (sscanf(dateString, "%d/%d/%d", &day, &month, &year) == 3) {
        const char *monthName = getMonthName(month);
        if (monthName != NULL) {
            sprintf(dateString, "%02d-%s-%d", day, monthName, year);
        }
    }
}

int main() {
    char date1[] = "20/04/2023";
    char date2[] = "05/12/2022";
    char date3[] = "01/01/2000";
    char date4[] = "15/07/2024";
    char date5[] = "31/10/1999";
    char date6[] = "10/13/2023"; // Invalid month
    char date7[] = NULL;

    printf("Original date: %s, Formatted date: ", date1);
    formatDate(date1);
    printf("%s\n", date1);

    printf("Original date: %s, Formatted date: ", date2);
    formatDate(date2);
    printf("%s\n", date2);

    printf("Original date: %s, )