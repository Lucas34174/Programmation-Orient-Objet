#ifndef COMPLEXRATIONNEL_H
#define COMPLEXRATIONNEL_H

class ComplexRationnel
{        
    private:        
        Rationnel a,b;
    public:
        ComplexRationnel( Rationnel a1, Rationnel b1 );
        ~ComplexRationnel();
        Rationnel getA();
        Rationnel getB();
        void setValue(Rationnel a,Rationnel b);
        ComplexRationnel plus(ComplexRationnel x);
        ComplexRationnel moins(ComplexRationnel x);
        ComplexRationnel multiplication(ComplexRationnel x);
};      


#endif