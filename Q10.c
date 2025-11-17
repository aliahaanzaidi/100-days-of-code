#include <stdio.h>

int main() 
{
    int totalSeconds, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    if (scanf("%d", &totalSeconds) != 1 || totalSeconds < 0) {
        printf("Error: Please enter a non-negative number of seconds\n");
        return 1;
    }

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;
    printf("Time in HH:MM:SS format = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}