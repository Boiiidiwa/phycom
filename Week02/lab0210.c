#include <stdio.h>

int main(){
    char n[5];
    scanf("%s", n);
    printf("%s%.2s", n+2, n);
    return 0;
}