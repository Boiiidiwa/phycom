#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void formatName(char name[])
{
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (i == 0 || name[i - 1] == ' ')
        {
            name[i] = toupper(name[i]);
        }
        else
        {
            name[i] = tolower(name[i]);
        }
    }
}

int compareName(const void *a, const void *b)
{
    return strcmp((const char *)a, (const char *)b);
}

int main()
{
    int n;

    scanf("%d", &n);

    char name[n][61];

    for (int i = 0; i < n; i++)
    {
        scanf(" %[^\n]", name[i]);

        formatName(name[i]);
    }

    qsort(name, n, sizeof(name[0]), compareName);

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}