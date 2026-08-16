#include <stdio.h>
#include <ctype.h>

int main()
{
    char name[2][102];

    for (int i = 0; i < 2; i++)
    {
        scanf(" %[^\n]", name[i]);

        for (int j = 0; name[i][j] != '\0'; j++)
        {
            if (islower(name[i][j]))
            {
                name[i][j] = toupper(name[i][j]);
            }
            else if (isupper(name[i][j]))
            {
                name[i][j] = tolower(name[i][j]);
            }
        }
    }

    printf("*** Results ***\n");
    printf("%s\n", name[0]);
    printf("%s\n", name[1]);
    printf("***************\n");

    int same = 1;

    for (int i = 0; name[0][i] != '\0' || name[1][i] != '\0'; i++)
    {
        if (tolower(name[0][i]) != tolower(name[1][i]))
        {
            same = 0;
            break;
        }
    }

    if (same == 1)
    {
        printf("Both strings are the same.");
    }
    else
    {
        printf("Both strings are not the same.");
    }

    return 0;
}
