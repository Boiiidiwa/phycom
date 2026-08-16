#include <stdio.h>

int fibo(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 2;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("method = %d", fibo(n));

    return 0;
}