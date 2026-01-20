/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:59:27 by rcochran          #+#    #+#             */
/*   Updated: 2026/01/20 12:38:10 by rcochran         ###   ########.fr       */
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

// char
/* 
	- is it a possible value for a char ?
		>= 0 <= 127
	- is it printable ?
		whitespace, >= 32 <= 126
	- print or error msg
*/
// int
/* 
	- is it only numeric and +/- ?
	- is it beyond int max or int min ?
	- print or error msg
*/
// float
/* 
	- is it only numeric and +/- ?
	- is it beyond float max or float min ?
	- print or error msg
*/
// double
/* 
	- is it only numeric and +/- ?
	- is it beyond double max or double min ?
	- print or error msg
*/


/* 
	- specific cases
	> inf, -inf
	> inff, -inff
	> nan
	> nanf
*/