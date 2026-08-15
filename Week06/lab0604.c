#include <stdio.h>

int main() {
    char text[100];
    int len;
    scanf("%[^\n]", text);

    for (len = 0; text[len] != '\0'; len++){}

    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", text[i]);
    }

    return 0;
}
