#include "namespace.h"

isa::Arithmetique::Arithmetique(){};

isa::Arithmetique::~Arithmetique(){};

static isa::Complex plus(isa::Complex c,isa::Rationnel r)
{
    isa::Complex ex(c.getA()+(r.getA()/r.getB()),c.getB());    
    return  ex;
}

static isa::Complex plus(isa::Complex c,float  f)
{   
    isa::Complex ex(c.getA()+f,c.getB());    
    return  ex;
}   

static isa::Complex multiplication(isa::Complex c,isa::Rationnel r)
{
    isa::Complex ex(c.getA()*(r.getA()/r.getB()),c.getB()*(r.getA()/r.getB()));    
    return  ex;
}

static isa::Complex multiplication(isa::Complex c,float f)
{
    isa::Complex ex(c.getA()*f,c.getB()*f);    
    return  ex;
}
