#pragma once

#include <string>

class ScalarConverter
{
	private:
		ScalarConverter(void);
		ScalarConverter(ScalarConverter const &copy);
		~ScalarConverter(void);
	public:
		/* Basic Operators */
		ScalarConverter	&operator=(ScalarConverter const &copy);

		static void convert(std::string input);
	};

