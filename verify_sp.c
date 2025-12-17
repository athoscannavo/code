#include <stdio.h>

int main(void){
    long long pop1 = 1492530;
    double area1 = 496.8;
    double pib1 = 50000000000.0;
    int pt1 = 10;
    double dens1 = (double)pop1 / area1;
    double pibpc1 = pib1 / (double)pop1;
    double sp1 = (double)pop1 + area1 + pib1 + pt1 + (pibpc1 * 1.0 / dens1);

    long long pop2 = 348208;
    double area2 = 124.6;
    double pib2 = 10000000000.0;
    int pt2 = 4;
    double dens2 = (double)pop2 / area2;
    double pibpc2 = pib2 / (double)pop2;
    double sp2 = (double)pop2 + area2 + pib2 + pt2 + (pibpc2 * 1.0 / dens2);

    printf("Computed dens1=%.8f\n", dens1);
    printf("Computed pibpc1=%.8f\n", pibpc1);
    printf("Computed sp1=%.8f\n", sp1);
    printf("Computed dens2=%.8f\n", dens2);
    printf("Computed pibpc2=%.8f\n", pibpc2);
    printf("Computed sp2=%.8f\n", sp2);
    return 0;
}
