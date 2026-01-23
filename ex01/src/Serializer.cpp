#include "Serializer.hpp"

Serializer::Serializer( void )
{

}

Serializer::Serializer( const Serializer &cpy )
{
	*this = cpy;
}
Serializer::~Serializer( )
{

}
Serializer & Serializer::operator=( const Serializer &cpy )
{
	(void)cpy;
	return (*this);
}