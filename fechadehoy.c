// This program prints the current date in European date format (dd/mm/yyyy) and the day of the week (Mon-Sun)
#include <stdio.h>
#include <time.h>
int main () {
    time_t ahora = time(NULL); // Get the current time
    struct tm *local = localttime(&ahora); // Convert it to local time structure
}