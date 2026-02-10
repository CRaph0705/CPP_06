
#include "main.hpp"
class Base ;
class A ;
class B ;
class C ;

Base* generate( void )
{
    srand(time(0));
	int r = std::rand() % 3;

    // std::cout << "r = "<< r << std::endl;
	if (r == 0)
		return (std::cout << "new A" << std::endl, new A);
	if (r == 1)
		return (std::cout << "new B" << std::endl, new B);
	return (std::cout << "new C" << std::endl, new C);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch (...)
	{	}

	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch (...)
	{	}

	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch (...)
	{	}
}


int	main ()
{
	Base * plop = generate();
	Base *toto = generate();

	identify(plop);
	identify(*toto);

	delete (plop);
	delete (toto);
	return (0);
}
