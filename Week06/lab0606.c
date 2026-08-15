#include <stdio.h>

int main()
{
    char name[20][61];
    char name2[61];
    for (int i = 0; i < 20; i++)
    {
        scanf(" %[^\n]", name[i]);

        for (int j = 0; name[i][j] != '\0'; j++)
        {
            if (j == 0 || name[i][j - 1] == ' ')
            {
                if (name[i][j] >= 'a' && name[i][j] <= 'z')
                {
                    name[i][j] = name[i][j] - 32;
                }
            }
            else
            {
                if (name[i][j] >= 'A' && name[i][j] <= 'Z')
                {
                    name[i][j] = name[i][j] + 32;
                }
            }
        }
    }

    for (int i = 0; i < 19; i++)
    {
        for (int j = i + 1; j < 20; j++)
        {
            int k = 0;

            while (name[i][k] == name[j][k])
            {
                k++;
            }

            if (name[i][k] > name[j][k])
            {
                for (k = 0; name[i][k] != '\0'; k++)
                {
                    name2[k] = name[i][k];
                }
                name2[k] = '\0';

                for (k = 0; name[j][k] != '\0'; k++)
                {
                    name[i][k] = name[j][k];
                }
                name[i][k] = '\0';

                for (k = 0; name2[k] != '\0'; k++)
                {
                    name[j][k] = name2[k];
                }
                name[j][k] = '\0';
            }
        }
    }

    for (int i = 0; i < 20; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}
