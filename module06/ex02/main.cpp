#include "Base.hpp"

void identify_from_pointer(Base *p)
{
   A *aaa = dynamic_cast<A*>(p);
    if (aaa != nullptr)
        std::cout << "A" << std::endl;
    B *bbb = dynamic_cast<B*>(p);
    if (bbb != nullptr)
        std::cout << "B" << std::endl;
    C *ccc = dynamic_cast<C*>(p);
    if (ccc != nullptr)
        std::cout << "C" << std::endl;

}

void identify_from_reference(Base &p)
{
    try
    {
        A &aaa = dynamic_cast<A&>(p);
        if (sizeof(aaa))
            std::cout << "A" << std::endl;
    }
    catch (const std::bad_cast& e)
    {

    }
    try
    {
        B &bbb = dynamic_cast<B&>(p);
        if (sizeof(bbb))
            std::cout << "B" << std::endl;
    }
    catch(const std::bad_cast& e)
    {
    }
    
    try
    {
        C &ccc = dynamic_cast<C&>(p);
        if (sizeof(ccc))
            std::cout << "C" << std::endl;
    }
    catch(const std::bad_cast& e)
    {
    }
  
}

int main()
{
    A aaa;
    B bbb;
    C ccc;
    identify_from_pointer(&aaa);
    identify_from_pointer(&bbb);
    identify_from_pointer(&ccc);
    identify_from_reference(aaa);
    identify_from_reference(ccc);
    identify_from_reference(bbb);

}