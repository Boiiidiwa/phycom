#include <stdio.h>

int main()
{
    char text[301], alpha;
    int n = 0;
    int position[301];
    scanf("%[^\n]", text);
    scanf(" %c", &alpha);

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (alpha >= 'a' && alpha <= 'z')
        {
            if (text[i] == alpha || text[i] == alpha - 32)
            {
                position[n] = i + 1;
                n++;
            }
        }
        else if (alpha >= 'A' && alpha <= 'Z')
        {
            if (text[i] == alpha || text[i] == alpha + 32)
            {
                position[n] = i + 1;
                n++;
            }
        }
    }

    if (n == 0)
    {
        printf("Not found.");
    }
    else
    {
        printf("There is/are %d \"%c\" in the above sentences.\n", n, alpha);
        printf("Position: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d", position[i]);

            if (i < n - 1)
            {
                printf(", ");
            }
        }
    }
    return 0;
}
