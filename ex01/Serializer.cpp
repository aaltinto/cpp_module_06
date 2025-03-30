#include "Serializer.hpp"

Serializer::Serializer(void)
{

}

Serializer::Serializer(Serializer const &copy)
{
	*this = copy;
}

Serializer::~Serializer(void)
{

}

Serializer const	&Serializer::operator=(const Serializer &copy)
{
	(void)copy;
	return (*this);
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	uintptr_t	ret;

	ret = reinterpret_cast<uintptr_t>(ptr);
	return ret;
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	Data *ret;

	ret = reinterpret_cast<Data *>(raw);
	return ret;
}