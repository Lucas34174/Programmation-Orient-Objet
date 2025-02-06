#include <iostream>
#include "namespace.h"

using namespace isa;

ComplexRationnel::ComplexRationnel(Rationnel a1,Rationnel b1)
{
    a = a1; 
    b = b1;
};

ComplexRationnel::~ComplexRationnel(){};

void isa::ComplexRationnel::setValue(Rationnel a,Rationnel b)
{
    this->a = a; 
    this->b = b;
}

isa::Rationnel isa::ComplexRationnel::getA()
{
    return a;
}

isa::Rationnel isa::ComplexRationnel::getB()
{
    return b;
}

isa::ComplexRationnel isa::ComplexRationnel::plus(ComplexRationnel x)
{
    ComplexRationnel ex(this->a.plus(x.getA()),this->b.plus(x.getB()));
    return ex;
}

isa::ComplexRationnel isa::ComplexRationnel::moins(ComplexRationnel x)
{
    ComplexRationnel ex(this->a.moins(x.getA()),this->b.moins(x.getB()));
    return ex;
}

isa::ComplexRationnel isa::ComplexRationnel::multiplication(ComplexRationnel x)
{
    ComplexRationnel ex((a.multiplication(x.getA())).moins(b.multiplication(x.getB())),(a.multiplication(x.getB())).plus(b.multiplication(x.getA())));
    return ex;
}