
#pragma once
#include <iostream>

class ScalarConverter
{
	private :
		ScalarConverter( void );
		~ScalarConverter( void );
		ScalarConverter( const ScalarConverter &cpy );
		ScalarConverter &operator=( const ScalarConverter &cpy );
	public :

	static void convert(std::string input);
} ;