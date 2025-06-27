#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    float total, average;

    printf("Enter marks of 5 subjects (out of 100):\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5.0;

    printf("Total Marks = %.2f\n", total);
    printf("Average = %.2f\n", average);

    // Grade decision
    if (m1 < 35 || m2 < 35 || m3 < 35 || m4 < 35 || m5 < 35) {
        printf("Result: Fail (One or more subjects below 35)\n");
    } else {
        if (average >= 90)
            printf("Grade: A+\n");
        else if (average >= 80)
            printf("Grade: A\n");
        else if (average >= 70)
            printf("Grade: B\n");
        else if (average >= 60)
            printf("Grade: C\n");
        else if (average >= 50)
            printf("Grade: D\n");
        else if (average >= 35)
            printf("Grade: E\n");
        else
            printf("Grade: Fail\n");
    }

    return 0;
}
