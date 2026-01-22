/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:12:45 by rcochran          #+#    #+#             */
/*   Updated: 2026/01/22 12:19:45 by rcochran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <iostream>

class Serializer {
	private:
		Serializer( void );
		Serializer( const Serializer &cpy );
		~Serializer( );
		Serializer operator=( const Serializer &cpy );
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

} ;