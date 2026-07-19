#include <stdio.h>
#include <math.h>

int main() {
    double v, p, d, h;

    scanf("%lf", &p);
    scanf("%lf", &d);
    scanf("%lf", &h);
    d /= 2;
    v = h * 3.14159265359 * (pow(d, 2.0));

    printf("Volume : %.2lfml\n", v);
    printf("Baht/ml : %.4lf", p/v);

    return 0;

}
