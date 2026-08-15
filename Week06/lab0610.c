#include <stdio.h>

int main()
{
    char text[101];
    int len = 0;
    int check = 1;

    scanf("%s", text);

    for (len = 0; text[len] != '\0'; len++){}

    for(int i = 0;i < len / 2; i++){
        if (text[i] != text[len - 1 - i])
        {
            check = 0;
            break;
        }
    }

    if (check == 1)
    {
        printf("It is Palindrome.");
    }
    else
    {
        printf("It is not Palindrome.");
    }

    return 0;
}
