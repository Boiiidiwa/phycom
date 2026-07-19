#include <stdio.h>
#include <math.h>

int main(){
    float h, kg;

    scanf("%f", &h);
    scanf("%f", &kg);

    printf("%f", kg/((h/100) * (h/100)));

    return 0;

}
