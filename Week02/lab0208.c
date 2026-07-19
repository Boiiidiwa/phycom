#include <stdio.h>

int main() {
    char fname1[50];
    char sname1[50];
    char person2[50];
    char person3[50];
    scanf("%s \n", fname1);
    scanf("%s", sname1);
    scanf(" %49[^\n]", person2);
    scanf(" %49[^\n]", person3);
    printf("Person 1: %s %s\n", fname1, sname1);
    printf("Person 2: %s\n", person2);
    printf("Person 3: %s\n", person3);
    return 0;
}