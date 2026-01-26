
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

void identify(Base* p) // * et pas & car sinon on ne return pas nullptr en cas de fail 
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}


int	main ()
{
	Base * plop = generate();
	return (0);
}
