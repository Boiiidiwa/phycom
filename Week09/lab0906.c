#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char *str;
    int lowercase = 0;
    int uppercase = 0;
    int digits = 0;

    str = (char *)malloc(1000 * sizeof(char));

    scanf(" %[^\n]", str);

    char *ptr = str;

    while (*ptr != '\0') {
        if (islower(*ptr))
            lowercase++;

        else if (isupper(*ptr))
            uppercase++;

        else if (isdigit(*ptr))
            digits++;

        ptr++;
    }

    printf("Lowercase letters: %d\n", lowercase);
    printf("Uppercase letters: %d\n", uppercase);
    printf("Digits: %d\n", digits);

    free(str);

    return 0;
}
