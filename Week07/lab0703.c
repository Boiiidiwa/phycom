#include <stdio.h>
#include <math.h>

void perimeter(double a, double b);
void area(double a, double b);

int main()
{
    double a, b;
    scanf("%lf", &a);
    scanf("%lf", &b);
    perimeter(a, b);
    area(a, b);
    return 0;
}

void perimeter(double a, double b){
    double ans;
    ans = sqrt(pow(a, 2.0)+ pow(b, 2.0));
    printf("Perimeter: %.2lf\n", ans + a + b);
}

void area(double a, double b){
    printf("Area: %.2lf", a/2.0 * b);
}