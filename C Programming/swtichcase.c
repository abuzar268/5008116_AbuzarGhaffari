#include <stdio.h>

int main() {
    int day;
    int result;

    while (1) {
        // Prompt user
        printf("\nEnter a day number between 1 to 7 (or 0 to exit): ");
        result = scanf("%d", &day);

        // Handle non-numeric input (symbols, letters, etc.)
        if (result != 1) {
            printf("Invalid input! Only numbers are allowed.\n");

            // Clear input buffer
            while (getchar() != '\n');
            continue;
        }

        // Exit condition
        if (day == 0) {
            printf("Exiting the program.\n");
            break;
        }

        // Validate input range
        if (day < 1 || day > 7) {
            printf("Invalid day! Please enter a number from 1 to 7.\n");
            continue;
        }

        // Display corresponding weekday
        switch (day) {
            case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            case 4:
                printf("Thursday\n");
                break;
            case 5:
                printf("Friday\n");
                break;
            case 6:
                printf("Saturday\n");
                break;
            case 7:
                printf("Sunday\n");
                break;
        }
    }

    return 0;
}
