/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:59:27 by rcochran          #+#    #+#             */
/*   Updated: 2026/02/02 14:55:29 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void )
{
	
}

ScalarConverter::~ScalarConverter( void )
{
	
}

ScalarConverter::ScalarConverter( const ScalarConverter &cpy )
{
	*this = cpy;
}

ScalarConverter& ScalarConverter::operator=( const ScalarConverter &cpy )
{
	(void)cpy;
	return (*this);
}

void ScalarConverter::convert(const std::string &input)
{
	double value;
	char *end;
	std::string invalid = "nan";

	if (std::strlen(input.c_str()) == 1 && !std::isdigit(input.c_str()[0]))
	{
		value = input[0] + 0;
	}
	else
	{
		value = (std::strtod(input.c_str(), &end));
		if (*end == 'f')
			end++;
		if (*end != '\0')
			value = std::strtod(invalid.c_str(), &end);
	}
	typedef void (*Converter)(double value);
	Converter converters[4] = {
		&conversionToChar,
		&conversionToInt,
		&conversionToFloat,
		&conversionToDouble
	};

	for (int i = 0; i < 4; i++)
	{
		converters[i](value);
	}
	return ;
}

		
void ScalarConverter::conversionToChar(double value)
{
	// std::cout << value << std::endl;
	int _value = static_cast<int>(floor(value));
	if (_value >= 32 && _value <= 126)
		std::cout << "char: '" << static_cast<char>(_value) << "'\n";
	else if (_value >= 0 && _value <= 127)
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: impossible\n";

}

void ScalarConverter::conversionToInt(double value)
{
	if (value >= INT_MIN && value <= INT_MAX)
		std::cout << "int: " << static_cast<int>(value) << "\n";
	else
		std::cout << "int: impossible\n";
}

void ScalarConverter::conversionToFloat(double value)
{
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f\n";
}

void ScalarConverter::conversionToDouble(double value)
{
	std::cout << "double: " << std::fixed << std::setprecision(1) << value << "\n";
}