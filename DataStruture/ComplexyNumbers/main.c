#include <stdio.h>
#include "ComplexNumbers.c"
#include <stdlib.h>

void main()
{

    Complex a = New(2.5, 1.5);
    Complex b = New(2, 1.75);
    printf("Complex number a:\n");
    Show(a);
    printf("Complex number b:\n");
    Show(b);

    Complex sum = Sum(a, b);
    Complex mul = Multiply(a, b);

    printf("Complex number sum:\n");
    Show(sum);
    printf("Complex number multi:\n");
    Show(mul);

    FreeComplex(sum);
    FreeComplex(mul);

    FreeComplex(a);
    FreeComplex(b);
}