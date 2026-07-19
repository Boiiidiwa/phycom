#include <stdio.h>

int main() {
    char name[30];
    char lastname[30];
    char id[8];
    int d;
    int m;
    int y;
    float gpa;
    scanf("%s", name);
    scanf("%s", lastname);
    scanf("%s", id);
    scanf("%d/%d/%d", &d, &m, &y);
    scanf("%f", &gpa);
    printf("Fullname: %s %s\n", name, lastname);
    printf("ID: %s\n",id);
    printf("DOB: %02d-%02d-%02d\n", d, m, y);
    printf("GPA: %.2f\n", gpa);
    return 0;
}