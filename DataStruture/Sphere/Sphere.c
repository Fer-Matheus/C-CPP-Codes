#include <stdlib.h>
#include <stdio.h>
#include "Sphere.h"
#define pi 3.14

Sphere New(double radius)
{
    Sphere new = (Sphere)malloc(sizeof(Sphere));
    new->radius = radius;
    return new;
}
double Area(Sphere sphere)
{
    return 4 * pi * (sphere->radius * sphere->radius);
}
double Volume(Sphere sphere)
{
    return (4 * pi * (sphere->radius * sphere->radius * sphere->radius)) / 3;
}
void FreeSphere(Sphere sphere)
{
    free(sphere);
}

void ShowSphere(Sphere sphere){
  printf("Radius: %.2lf\n", sphere->radius);
}
