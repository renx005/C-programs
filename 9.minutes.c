#include<stdio.h>

int main() {
    int hours, minutes, total_minutes;
    printf("time in minutes: ");
    scanf("%d", &total_minutes);

    hours = total_minutes / 60; // Calculate hours
    minutes = total_minutes % 60; // Calculate remaining minutes

    printf("Time in hours and minutes: %d hours and %d minutes\n", hours, minutes);
    
    return 0;
}