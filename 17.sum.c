#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int sum = 0;
    while (num > 0) {
        sum += num % 10; // Add the last digit to sum
        num /= 10;       // Remove the last digit
    }
    sum += num; // Add the last digit to sum (if num is 0, this has no effect)
    printf("Sum of digits: %d\n", sum);
    return 0;
}