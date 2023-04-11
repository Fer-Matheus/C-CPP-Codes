#include <stdio.h>
#include "Sphere.h"

int main()
{
    Sphere sphere = New(4);

    printf("Area sphere: %.4lf\n\n", Area(sphere));
    printf("Volume sphere: %.4lf\n\n", Volume(sphere));
    ShowSphere(sphere);
    FreeSphere(sphere);
    return 0;
}
