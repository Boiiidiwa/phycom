#include <stdio.h>
#include <stdlib.h>
 
int main() {
    char *str = (char*) malloc(sizeof(char)* 101);
    scanf("%[^\n]", str);
 
    char *ptr = str;
    while(*ptr != '\0')
        ptr++;
 
    unsigned int length = ptr - str;
    printf("%u", length);

}
