#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> // For sleep()

#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define CYAN    "\033[1;36m"
#define RESET   "\033[0m"

void fill_time(char*, int);
void fill_date(char*);
int input_format();
void clear_screen();

int main() {
    char time_str[50], date_str[100];
    int format = input_format();

    // Get current date once
    fill_date(date_str);
    clear_screen();
    printf(BLUE "\n=====================================\n" RESET);
    printf(MAGENTA "       Digital Clock with Date       \n" RESET);
    printf(BLUE "=====================================\n\n" RESET);

    printf(GREEN "Current Date: " CYAN "%s\n" RESET, date_str);
    printf(GREEN "Current Time: " YELLOW "%s\n" RESET, time_str);

    printf(BLUE "\n=====================================\n" RESET);

    while (1) {
      fill_time(time_str, format);

      // Move cursor up 3 lines and overwrite time
      printf("\033[3A"); // Move up 3 lines
      printf("Current Time: %s\n", time_str);
      printf("\033[2B"); // Move down 2 lines back to bottom
      fflush(stdout);

      sleep(1);
    }  
}

void clear_screen() {
#ifdef _WIN32
    system("cls");  // for windows 
#else
    system("clear");  // for lnux and macOS
#endif
}

int input_format() {
    int format;
    printf(GREEN "\nChoose the time format:\n" RESET);
    printf(YELLOW "1. 24 Hour format\n" RESET);
    printf(YELLOW "2. 12 Hour format (default)\n" RESET);
    printf(CYAN "Enter your choice (1/2): " RESET);

    if (scanf("%d", &format) != 1 || (format != 1 && format != 2)) {
        printf(RED "\nInvalid input! Defaulting to 12-hour format.\n" RESET);
        while (getchar() != '\n'); // Clear input buffer
        return 2;
    }
    return format;
}

void fill_date(char* buffer) {
    time_t raw_time;
    struct tm *current_time;
    time(&raw_time);
    current_time = localtime(&raw_time);
    strftime(buffer, 100, "%A, %B %d, %Y", current_time);
}

void fill_time(char* buffer, int format) {
    time_t raw_time;
    struct tm *current_time;
    time(&raw_time);
    current_time = localtime(&raw_time);
    if (format == 1) {
        strftime(buffer, 50, "%H:%M:%S", current_time);
    } else {
        strftime(buffer, 50, "%I:%M:%S %p", current_time);
    }
}


/*
Explanation

1. Includes

<stdio.h> → Allows us to use printf, scanf, etc. for input/output.
<stdlib.h> → Gives access to system() and other utility functions.
<time.h> → Lets us work with time and date using time_t, localtime, strftime, etc.
<unistd.h> → Allows use of sleep() (to pause program execution for a number of seconds) — works on Linux/Mac.

2. Function Declarations

These are function prototypes — they tell the compiler:

fill_time(char*, int) → Will fill a string with the current time (string pointer + format type).

fill_date(char*) → Will fill a string with the current date.

input_format() → Asks the user for their preferred time format (12/24 hr).

clear_screen() → Clears the terminal screen.


3. Main Function

char time[50] → Buffer to store the formatted time string.
char date[100] → Buffer to store the formatted date string.
format = input_format(); → Asks user whether they want 24-hour or 12-hour format.

while (1) → Infinite loop (runs forever).

fill_time(time, format) → Writes current time into time[] in chosen format.

fill_date(date) → Writes current date into date[].

clear_screen() → Clears the terminal before printing again (so it looks like a live clock).

printf(...) → Displays the time and date.
sleep(1) → Pauses for 1 second before updating again.

4. Clear Screen 

This function clears the terminal screen so that the time updates in place instead of scrolling.
#ifdef _WIN32 → Checks if compiling on Windows. If yes, use system("cls").
Else (Linux/Mac), use system("clear").

5. Asking for Time Format

Prints menu to let the user choose 1 for 24-hour or 2 for 12-hour format.
scanf("%d", &format) → Reads the number from the user.
Returns the chosen format back to main().

6. Filling the Date

time_t raw_time → Stores the current time as seconds since the UNIX epoch.
localtime() → Converts raw time into struct tm (hours, minutes, etc.).
strftime() → Formats the time/date into a readable string:
%A → Full weekday name (e.g., "Monday").
%B → Full month name (e.g., "August").
%d → Day of month.
%Y → Year.

7. Filling the Time

%H → Hours (00–23).
%I → Hours (01–12).
%M → Minutes.
%S → Seconds.
%p → AM/PM marker.
If format == 1, use 24-hour format, else use 12-hour format.

*/