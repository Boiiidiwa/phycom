#include <stdio.h>

int main()
{
    char x, y;
    int numx, numy;
    int result = 1;

    scanf("%c%d", &x, &numx);
    scanf(" %c%d", &y, &numy);

    for (int i = 0; i < numy - numx; i++)
    {
        result = result * 2;
    }

    printf("%d", result);

    return 0;
}
