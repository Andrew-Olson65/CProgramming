#include <stdio.h>

int main() {
    int first_number;
    first_number = 1;

    int second_number = -15;

    int sum = first_number + second_number;

    // %d - conversion specifier
    printf("The first number is %d\n", first_number);
    printf("The second number is %d\n", second_number);
    printf("%d + %d = %d\n", first_number, second_number, sum);

    return 0;
}