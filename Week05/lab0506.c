#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n - 1; j++)
        {
            printf(" ");
        }
        for (int k = i; k < (i * 3) + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}