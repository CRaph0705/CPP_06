/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:59:27 by rcochran          #+#    #+#             */
/*   Updated: 2026/01/21 12:20:45 by rcochran         ###   ########.fr       */
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
