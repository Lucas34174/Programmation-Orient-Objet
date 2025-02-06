#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{       
    private:
        float  a,b;
    public:
        Complex();
        Complex(float a,float b);
        ~Complex();
        float getA();
        float getB();
        void setValue(float a,float b);
        void getValue();
        Complex plus(Complex x);
        Complex moins(Complex x);
        Complex division(Complex x);
        Complex multiplication(Complex x);
};      


#endif