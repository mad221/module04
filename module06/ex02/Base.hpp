#ifndef _BASE_
#define _BASE_
#include <iostream>
#include <string>

class Base 
{
    public:
        virtual ~Base() =0;

    private:

};

class A : public Base
{
    public:
        A();
        ~A();
};

class B : public Base
{
    public:
        B();
        ~B();
};

class C : public Base
{
    public:
        C();
        ~C();
};

#endif