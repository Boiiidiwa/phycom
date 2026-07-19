#include <stdio.h>

int main(){
    char n[5];
    scanf("%s",n);

    printf("%-81.1s",n);
    printf("%-81.2s",n);
    printf("%-81.3s",n);
    printf("%-81.4s",n);
    printf("%-76.5s",n);
    return 0;
}