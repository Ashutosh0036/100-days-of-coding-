// ...existing code...
// Q23: Write a program to calculate library fine based on late days as follows:
// First 5 days late: 2/day
// Next 5 days late: 4/day
// Next 20 days late: 6/day
// More than 30 days: Membership Cancelled.

#include <stdio.h>

int main(void) {
    int days;
    int fine = 0;

    printf("Enter number of late days: ");
    if (scanf("%d", &days) != 1) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    if (days < 0) {
        fprintf(stderr, "Number of days cannot be negative\n");
        return 1;
    }

    if (days > 30) {
        printf("Membership Cancelled\n");
        return 0;
    }

    if (days <= 5) {
        fine = days * 2;
    } else if (days <= 10) {
        fine = 5 * 2 + (days - 5) * 4;
    } else { // days between 11 and 30
        fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
    }

    printf("Fine = %d\n", fine);
    return 0;
}
// ...existing code...