#include <stdio.h>

int main()
{
    int n, s;
    for (;;)
    {
        scanf("%d", &n);
        if (n == -9)
        {
            break;
        }
        s += n;
    }
    printf("%d", s);
    return 0;
}
