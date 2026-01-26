
#include "main.hpp"
//TODO srand ?
Base* generate()
{
	int r = std::rand() % 3;
	if (r == 0)
		return (new A);
	if (r == 1)
		return (new B);
	return (new C);
}

/* void identify(Base* p) // * et pas & car sinon on ne return pas nullptr en cas de fail 
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
} */


void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    }
    catch (std::exception e) {e.what();}

    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    }
    catch (std::exception e) {e.what();}

    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch (std::exception e) {e.what();}
}



int	main ()
{
	Base * plop = generate();

	identify(plop);

	delete (plop);
	return (0);
}
