#include "Serializer.hpp"
#include "data.hpp"

int main()
{
	Data test;
	test.str1 = "Hello ";
	test.str2 = "World!";
	std::cout << test.str1 << test.str2 << std::endl;
	// Serializer::serialize(&test);
	Data* test2 = Serializer::deserialize(Serializer::serialize(&test));
	std::cout << test2->str1 << test2->str2 << std::endl;
	return (0);
}