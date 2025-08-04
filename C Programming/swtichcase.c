#include <stdio.h>

int main() {
    char ch;
    // running an infinite while loop which is alsways true
    
    while (1) {
        printf("\nEnter a day number between 1 to 7 (or 0 to exit): ");
        scanf(" %c", &ch);

        if (ch == '0') {
            printf("Exiting the program.\n");
            break;     // the while loop break when user enters '0'
        }
        // this is the case when the user enters other character or symbol other than 0 to 7
        if (ch < '1' || ch > '7') {
            printf("Invalid input! Please enter a number from 1 to 7.\n");
            continue;  
        }

        switch (ch) {
            case '1':
                printf("Monday\n");
                break;

            case '2':
                printf("Tuesday\n");
                break;

            case '3':
                printf("Wednesday\n");
                break;

            case '4':
                printf("Thursday\n");
                break;

            case '5':
                printf("Friday\n");
                break;

            case '6':
                printf("Saturday\n");
                break;

            case '7':
                printf("Sunday\n");
                break;
        }
    }

    return 0;
}
