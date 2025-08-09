#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

// ANSI color codes
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define CYAN    "\033[1;36m"
#define MAGENTA "\033[1;35m"
#define RESET   "\033[0m"

void getTime(char *timeBuffer, int format, int blink);
void getDate(char *dateBuffer);
int chooseFormat();
void showHeader();
void getExtraInfo(char *extraBuffer);

int main() {
    char timeStr[50], dateStr[100], extraStr[100];
    int format = chooseFormat();
    int blink = 1; // For blinking colon effect

    printf("\033[2J"); // Clear screen once

    while (1) {
        getTime(timeStr, format, blink);
        getDate(dateStr);
        getExtraInfo(extraStr);

        printf("\033[H"); // Move cursor to top-left
        showHeader();

        printf(YELLOW "Current Time: " RESET CYAN "%s\n" RESET, timeStr);
        printf(YELLOW "Current Date: " RESET CYAN "%s\n" RESET, dateStr);
        printf(MAGENTA "Extra Info:   " RESET "%s\n", extraStr);

        fflush(stdout);
        blink = !blink; // Toggle blink state
        sleep(1);
    }
    return 0;
}

// Ask user for time format
int chooseFormat() {
    int choice;
    printf(GREEN "\nChoose the time format:\n" RESET);
    printf(YELLOW "1. 24 Hour format\n" RESET);
    printf(YELLOW "2. 12 Hour format (default)\n" RESET);
    printf(CYAN "Enter your choice (1/2): " RESET);

    if (scanf("%d", &choice) != 1 || (choice != 1 && choice != 2)) {
        printf(RED "\nInvalid input! Defaulting to 12-hour format.\n" RESET);
        while (getchar() != '\n'); // Clear input buffer
        return 2;
    }
    return choice;
}

// Display header
void showHeader() {
    printf(BLUE "=====================================\n" RESET);
    printf(GREEN "        Digital Clock with Date      \n" RESET);
    printf(BLUE "=====================================\n\n" RESET);
}

// Get current date
void getDate(char *dateBuffer) {
    time_t now;
    struct tm *current;
    time(&now);
    current = localtime(&now);
    strftime(dateBuffer, 100, "%A, %B %d, %Y", current);
}

// Get extra info (day of year, week number)
void getExtraInfo(char *extraBuffer) {
    time_t now;
    struct tm *current;
    time(&now);
    current = localtime(&now);

    char dayOfYear[20], weekNum[20];
    strftime(dayOfYear, sizeof(dayOfYear), "Day %j of the year", current);
    strftime(weekNum, sizeof(weekNum), "Week %U", current);

    snprintf(extraBuffer, 100, "%s | %s", dayOfYear, weekNum);
}

// Get current time with optional blinking colon
void getTime(char *timeBuffer, int format, int blink) {
    time_t now;
    struct tm *current;
    time(&now);
    current = localtime(&now);

    char temp[50];
    if (format == 1) {
        strftime(temp, 50, "%H:%M:%S", current);
    } else {
        strftime(temp, 50, "%I:%M:%S %p", current);
    }

    // Make colon blink by replacing it with space
    if (!blink) {
        for (int i = 0; temp[i]; i++) {
            if (temp[i] == ':') temp[i] = ' ';
        }
    }
    snprintf(timeBuffer, 50, "%s", temp);
}
