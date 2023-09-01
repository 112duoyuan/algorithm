#include "complex.h"

void assign(Complex * A,float real,float imag){
    A->imagpart = imag;
    A->realpart = real;
}

void assign(Complex * A,float real,float imag){
    A->realpart = real;
    A->imagpart = imag;
}

void add(Complex * c,Complex A, Complex B){
    c->realpart =A.realpart + B.realpart;
    c->imagpart =B.imagpart + A.imagpart;
}

void minus(Complex * c,Complex A, Complex B){
    
}

void multiply(Complex * c,Complex A, Complex B){

}

void divide(Complex * c,Complex A, Complex B){

}
