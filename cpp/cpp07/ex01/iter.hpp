#include <iostream>

// template <typename T>
// void isPositive(T& element)
// {
// 	if (element >= 0)
// 		std::cout << element << " is positive" << std::endl;
// 	else
// 		std::cout << element << " is negative" << std::endl;
// }

// template <typename T>
// void addOne(T& element)
// {
// 	element += 1;
// }

template <typename T>
void print(T& element)
{
	std::cout << element << " ";
}

template <typename P, typename L, typename F>
void iter(P* arr, L l, void (*f)(F&))
{
	for(size_t i = 0; i < l; i++)
	{
		f(arr[i]);
	}
}