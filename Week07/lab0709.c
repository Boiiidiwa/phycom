#include <stdio.h>
#include <math.h>

int main()
{
    double h, u, r;
    scanf("%lf\n%lf", &r, &u);
    h = (pow(u, 2) * pow(sin((r * 3.141592653589793) / 180.0), 2.0)) / (2 * 9.81);
    printf("theta (degree) : %.0lf\n", r);
    printf("u (m/s) : %.0lf\n", u);
    printf("h (m) : %.4lf", h);

    return 0;

}