#include "ComplexNumbers.h"
#include <stdlib.h>

Complex New(double real, double imaginary)
{
	Complex new = (Complex)malloc(sizeof(Complex));
	new->real = real;
	new->imaginary = imaginary;
	return new;
}
void Show(Complex number)
{
	printf("%.2lf + %.2lfi\n", number->real, number->imaginary);
}

Complex Sum(Complex x, Complex y)
{
	Complex sum = (Complex)malloc(sizeof(Complex));
	sum->real = x->real + y->real;
	sum->imaginary = x->imaginary + y->imaginary;
	return sum;
}
Complex Multiply(Complex x, Complex y)
{
	Complex sum = (Complex)malloc(sizeof(Complex));
	sum->real = x->real * y->real;
	sum->imaginary = x->imaginary * y->imaginary;
	return sum;
}
void FreeComplex(Complex number)
{
	free(number);
}
