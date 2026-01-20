/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:54:53 by rcochran          #+#    #+#             */
/*   Updated: 2026/01/20 12:47:34 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	static void convert(std::string input)
	{
		// conversions[] = {};
		std::cout << "input given : " << input << std::endl;
		
		void	*(*f)[] = {&conversion_to_char, &conversion_to_int, &conversion_to_double, &conversion_to_float};
		for (int i = 0; i < 4; i++)
		{
			try
			{
				*f[i];
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}
			
		}
		try
		{
			std::cout << input.conversion_to_char() << std::endl;
		}
		catch ()
		{
			//
		}
		try
		{
			std::cout << input.conversion_to_int() << std::endl;
		}
		catch ()
		{
			//
		}
		try
		{
			std::cout << input.conversion_to_double() << std::endl;
		}
		catch ()
		{
			//
		}
		try
		{
			std::cout << input.conversion_to_float() << std::endl;
		}
		catch ()
		{
			//
		}
		std::cout << "input given : " << input << std::endl;
		std::cout << "input given : " << input << std::endl;
		std::cout << "input given : " << input << std::endl;

		
		return ;
	}
} ;

