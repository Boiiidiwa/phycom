#include <stdio.h>

int main()
{
    char text1[201];
    char text2[201];
    char key1[] = "ABXYPQRMNCEDKLJOSHTUFVZGWI";
    char key2[] = "abxypqrmncedkljoshtufvzgwi";
    int i;

    scanf("%[^\n]", text1);

    for (i = 0; text1[i] != '\0'; i++)
    {
        if (text1[i] >= 'A' && text1[i] <= 'Z')
        {
            for (int j = 0; key1[j] != '\0'; j++)
            {
                if (text1[i] == key1[j])
                {
                    text2[i] = key1[(j + 5) % 26];
                    break;
                }
            }
        }
        else if (text1[i] >= 'a' && text1[i] <= 'z')
        {
            for (int j = 0; key2[j] != '\0'; j++)
            {
                if (text1[i] == key2[j])
                {
                    text2[i] = key2[(j + 5) % 26];
                    break;
                }
            }
        }
        else
        {
            text2[i] = text1[i];
        }
    }

    text2[i] = '\0';
    printf("%s", text2);

    return 0;
}
