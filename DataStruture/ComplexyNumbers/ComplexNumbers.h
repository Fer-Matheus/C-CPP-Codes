#ifndef COMPLEXNUMBERS_H
#define COMPLEXNUMBERS_H

typedef struct complex
{
    double real;
    double imaginary;
} *Complex;

Complex New(double, double);
void Show(Complex);
Complex Sum(Complex, Complex);
Complex Multiply(Complex, Complex);
void FreeComplex(Complex);

#endif
