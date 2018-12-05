#include <stdio.h>

int main() {
    double aSide;
    double bSide;
    double cSide;

    scanf("%lf %lf %lf",&aSide, &bSide, &cSide );
    double volume = aSide* bSide *cSide;
    double surface = 2 * ((aSide * bSide) + (aSide * cSide) + (cSide * bSide));
    printf("%.0lf\n %.0lf", volume, surface);
    return 0;
}