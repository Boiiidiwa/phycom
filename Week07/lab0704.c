#include <stdio.h>

double celsiusToFahrenheit(double celcius);
double fahrenheitToCelcius(double fahrenheit);
void printFarenheit(double fahrenheit);
void printCelcius(double celcius);

int main()
{
    double temp;
    char d;
    scanf("%lf %c", &temp, &d);
    if (d == 'c' || d == 'C')
    {
        printFarenheit(celsiusToFahrenheit(temp));
    }
    if (d == 'f' || d == 'F')
    {
        printCelcius(fahrenheitToCelcius(temp));
    }
    return 0;
}

double celsiusToFahrenheit(double celcius)
{
    double f;
    f = 32 + (celcius * (180.0 / 100.0));
    return f;
}

double fahrenheitToCelcius(double fahrenheit)
{
    double c;
    c = (fahrenheit - 32) / (180.0 / 100.0);
    return c;
}

void printFarenheit(double fahrenheit)
{
    printf("%.2lf f", fahrenheit);
}

void printCelcius(double celcius)
{
    printf("%.2lf c", celcius);
}