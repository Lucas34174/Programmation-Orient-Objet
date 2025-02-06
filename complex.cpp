#include <iostream>
#include "namespace.h"

isa::Complex::Complex()
{
    a=1;
    b=1;
}

isa::Complex::Complex(float a1,float b1)
{
    a = a1; 
    b = b1;
};

isa::Complex::~Complex(){};

void isa::Complex::setValue(float a1,float b1)
{
    a = a1; 
    b = b1;
}

void isa::Complex::getValue()
{
    std::cout << a <<"+i"<< b <<std::endl;
}

float isa::Complex::getA()
{
    return a;
}

float isa::Complex::getB()
{
    return b;
}

isa::Complex isa::Complex::plus(isa::Complex x)
{
    isa::Complex ex(a+x.getA(),b+x.getB());
    return ex;
}

isa::Complex isa::Complex::moins(isa::Complex x)
{
    isa::Complex ex(a-x.getA(),b-x.getB());
    return ex;
}

isa::Complex isa::Complex::multiplication(isa::Complex x)
{
    isa::Complex ex(a*x.getA()-b*x.getB(),a*x.getB()+b*x.getA());
    return ex;
}

isa::Complex isa::Complex::division(isa::Complex x)
{
    isa::Complex ex(a*x.getA()-b*x.getB(),a*x.getB()+b*x.getA());
    return ex;
}