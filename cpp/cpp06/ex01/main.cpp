#include "Serializer.hpp"
#include "data.hpp"

/*Reinterpret_cast is a type of casting operator used in C++.
It is used to convert a pointer of some data type into a pointer of another data type,
even if the data types before and after conversion are different.*/

int main()
{
	Data test;
	test.str1 = "Hello ";
	test.str2 = "World!";
	std::cout << test.str1 << test.str2 << std::endl;
	uintptr_t converted =  Serializer::serialize(&test);
	std::cout << converted << std::endl;
	Data* test2 = Serializer::deserialize(converted);
	std::cout << test2->str1 << test2->str2 << std::endl;
	return (0);
}