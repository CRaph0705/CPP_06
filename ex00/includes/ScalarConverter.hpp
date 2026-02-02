/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:54:53 by rcochran          #+#    #+#             */
/*   Updated: 2026/02/02 14:56:14 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>
#include <climits>
#include <iomanip>
#include <cstring>
#include <math.h>

class ScalarConverter
{
	private :
		ScalarConverter( void );
		~ScalarConverter( );
		ScalarConverter( const ScalarConverter &cpy );
		ScalarConverter &operator=( const ScalarConverter &cpy );
	public :
		static void convert(const std::string &input);

		static void conversionToChar(double value);

		static void conversionToInt(double value);

		static void conversionToFloat(double value);

		static void conversionToDouble(double value);
} ;
