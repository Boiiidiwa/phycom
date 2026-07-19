#include <stdio.h>

int main() {
    double p, pc, q;

    scanf("%lf", &p);
    scanf("%lf", &pc);
    scanf("%lf", &q);

    printf("%.2lf", (p*(1-pc/100))*q);

    return 0;
}
