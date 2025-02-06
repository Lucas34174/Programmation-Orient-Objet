#ifndef   ARITHMETIQUE_H
#define ARITHMETIQUE_H

class Arithmetique
{
    public:
        Arithmetique();
        ~Arithmetique();
        static Complex plus(Complex c,Rationnel r);
        static Complex plus(Complex c,float f);
        static Complex multiplication(Complex c,Rationnel r);
        static Complex multiplication(Complex c,float f);
};

#endif