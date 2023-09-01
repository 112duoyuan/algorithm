#include <stdio.h>

typedef struct {
    float realpart;
    float imagpart;
}Complex;

void assign(Complex * A,float real,float imag);

void add(Complex * c,Complex A, Complex B);

void minus(Complex * c,Complex A, Complex B);

void multiply(Complex * c,Complex A, Complex B);

void divide(Complex * c,Complex A, Complex B);
