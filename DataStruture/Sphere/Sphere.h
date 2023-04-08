#ifndef SPHERE_H
#define SPHERE_H

typedef struct aux
{
    double radius;
}*Sphere;

Sphere New(double);
double Area(Sphere);
double Volume(Sphere);
void FreeSphere(Sphere);

#endif