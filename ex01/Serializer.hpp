#pragma once

#include <string>
#include <stdint.h>

typedef struct Data
{
	std::string		name;
	unsigned int	age;
	Data			*next;
}		Data;

class Serializer
{
	private:
		/* Constructors & Destructors */
		Serializer(void);
		Serializer(Serializer const &copy);
		~Serializer(void);

	public:

		static uintptr_t	serialize(Data* ptr);
		static Data 		*deserialize(uintptr_t raw);
		/* Basic Operators */
		Serializer const	&operator=(Serializer const &copy);
};

