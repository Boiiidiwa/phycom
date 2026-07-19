#include <stdio.h>

int main() {
    unsigned long long s;

    scanf("%llu", &s);

    printf("%llu s = %llu d ", s, s/3600/24);
    s %= 3600*24;
    printf("%llu h ", s/3600);
    s %= 3600;
    printf("%llu m ", s/60);
    s %= 60;
    printf("%llu s", s);

    return 0;

}
