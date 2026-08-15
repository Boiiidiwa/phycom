#include <stdio.h>

int main() {
    unsigned int n[5];
    int number;

    scanf("%u %u %u %u %u", &n[0], &n[1], &n[2], &n[3], &n[4]);
    scanf("%d", &number);

    printf("Value at index %d is %u", number, n[number]);

    return 0;
}
