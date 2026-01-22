/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:54:53 by rcochran          #+#    #+#             */
/*   Updated: 2026/01/22 12:07:02 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>
#include <limits.h>
#include <iomanip>

class ScalarConverter
{
	private :
		ScalarConverter( void );
		~ScalarConverter( );
		ScalarConverter( const ScalarConverter &cpy );
		ScalarConverter &operator=( const ScalarConverter &cpy );
	public :
		static void convert(const std::string &input)
		{
			double value;
			char *end;
			std::string invalid = "nan";

			value = std::strtod(input.c_str(), &end);
			if (*end != '\0')
				value = std::strtod(invalid.c_str(), &end);

			typedef void (*Converter)(double value);
			Converter converters[4] = {
				&conversionToChar,
				&conversionToInt,
				&conversionToFloat,
				&conversionToDouble
			};

			for (int i = 0; i < 4; i++)
			{
				try
				{
					converters[i](value);
				}
				catch(const std::exception& e)
				{
					std::cerr << e.what() << '\n';
				}
			}
			return ;
		}

		
		static void conversionToChar(double value)
		{
			if (value >= 32 && value <= 126)
				std::cout << "char: '" << static_cast<char>(value) << "'\n";
			else if (value >= 0 && value <= 127)
				std::cout << "char: Non displayable\n";
			else
				std::cout << "char: impossible\n";

		}

		static void conversionToInt(double value)
		{
			if (value >= INT_MIN && value <= INT_MAX)
				std::cout << "int: " << static_cast<int>(value) << "\n";
			else
				std::cout << "int: impossible\n";
		}

		static void conversionToFloat(double value)
		{
			std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f\n";
		}

		static void conversionToDouble(double value)
		{
			std::cout << "double: " << std::fixed << std::setprecision(1) << value << "\n";
		}
} ;
