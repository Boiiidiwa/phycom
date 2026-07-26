#include <stdio.h>
#include <math.h>

int main(){
    double p, protwo, proone;
    int q, per;

    scanf("%lf\n%d\n%d", &p, &per, &q);
    protwo = p * floor(q / 3)*2 + (q % 3 * p);
    proone = q * p *(1 - (per / 100.0));
    
    if (protwo < proone){
        printf("Buy 2 Get 1\n");
        printf("%.2lf", protwo);
    }else{
        printf("Discount %d%%\n", per);
        printf("%.2lf", proone);
    }

    return 0;

}
