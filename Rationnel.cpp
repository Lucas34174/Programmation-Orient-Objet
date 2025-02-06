#include <iostream>

#include "namespace.h"

isa::Rationnel::Rationnel()
{
    a=1;
    b=1;
}

isa::Rationnel::Rationnel(int a1,int b1)
{
    a = a1; 
    b = b1;
}

isa::Rationnel::~Rationnel(){}

void isa::Rationnel::setValue(int a1,int b1)
{
    a = a1; 
    b = b1;
}

void isa::Rationnel::getValue()
{
    std::cout << a <<"/"<< b <<std::endl;
}

int isa::Rationnel::getA()
{
    return a;
}

int isa::Rationnel::getB()
{
    return b;
}

isa::Rationnel isa::Rationnel::plus(Rationnel x)
{
    Rationnel ex(a*x.getB()+x.getA()*b,b*x.getB());
    return ex;
}

isa::Rationnel isa::Rationnel::moins(Rationnel x)
{
    Rationnel ex(a*x.getB()-x.getA()*b,b*x.getB());
    return ex;
}

isa::Rationnel isa::Rationnel::multiplication(Rationnel x)
{
    Rationnel ex(a*x.getA(),b*x.getB());
    return ex;
}

isa::Rationnel isa::Rationnel::division(Rationnel x)
{
    Rationnel ex(a*x.getB(),b*x.getA());
    return ex;
}