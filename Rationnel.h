#ifndef RATIONNEL_H
#define RATIONNEL_H

class Rationnel
{
    private:
        int  a,b;
    public:
        Rationnel();
        Rationnel(int a1,int b1);
        ~Rationnel();
        int getA();
        int getB();
        void setValue(int a1,int b1);
        void getValue();
        Rationnel plus(Rationnel x);
        Rationnel division(Rationnel x);
        Rationnel moins(Rationnel x);
        Rationnel multiplication(Rationnel x);
};

#endif