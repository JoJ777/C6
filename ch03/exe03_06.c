#include <stdio.h>
#define MASS_MOL 3.0e-23 
#define MASS_QT 950
int main(void)
{
    double quart, molecules;

    printf("Enter a quart for water: ");
    scanf("%lf", &quart);
    molecules = quart * MASS_QT / MASS_MOL;
    printf("%e quart water includes %e water molecules.\n", quart, molecules);

    return 0;
}