
#include <stdio.h>

int main() {
    int years = 1;
    int mins = 1;

    puts("Enter your age in years: ");

    scanf("%d", &years);

    mins = years * 365 * 24 * 60;

    printf("%d years is %d minutes\n", years, mins);

    return 0;
}



