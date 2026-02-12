/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:12:45 by rcochran          #+#    #+#             */
/*   Updated: 2026/02/12 14:13:11 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>
#include <stdint.h>
#include "structures.hpp"

class Serializer {
	private:
		Serializer( void );
		Serializer( const Serializer &cpy );
		~Serializer( );
		Serializer &operator=( const Serializer &cpy );
	public:
		static uintptr_t serialize(Data* ptr);

		static Data* deserialize(uintptr_t raw);

} ;

// https://www.quora.com/How-do-you-explain-the-differences-among-static_cast-reinterpret_cast-const_cast-and-dynamic_cast-to-a-new-C++-programmer
// https://en.cppreference.com/w/cpp/language/reinterpret_cast.html
