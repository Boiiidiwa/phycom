#include <stdio.h>

int main()
{
    int age;
    int average_age = 0;
    int con1 = 0, con2 = 0, con3 = 0, con4 = 0;

    float h, w;
    float average_h = 0, average_w = 0;

    int i = 1;
    while (i <= 50)
    {
        scanf("%d %f %f", &age, &h, &w);
        if (age >= 20 && h >= 160)
        {
            con1++;
        }
        if (age < 20 && (h <= 180 || w >= 60))
        {
            con2++;
        }
        if (age >= 30 && w >= 40 && w <= 80)
        {
            con3++;
        }
        if (age < 40 && (w < 85 || h <= 200))
        {
            con4++;
        }

        average_age += age;
        average_h += h;
        average_w += w;
        i++;
    }
    printf("Age >= 20 and Height >= 160: %d\n", con1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", con2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", con3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", con4);
    printf("Average Age: %d\n", average_age / 50);
    printf("Average Height: %.2f\n", average_h / 50);
    printf("Average Weight: %.2f\n", average_w / 50);

    return 0;
}
