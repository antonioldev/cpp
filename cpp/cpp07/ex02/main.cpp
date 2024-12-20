#include <iostream>
#include <stdlib.h>
#include "Array.hpp"
// #include "Array.tpp"

#define MAX_VAL 5
int main(int, char**)
{

	// Array<char> character(MAX_VAL);
	// for (int i = 0; i < MAX_VAL; i++)
    // {
    //     character[i] = i + 75;
    // }
	// for (int i = 0; i < MAX_VAL; i++)
    // {
	// 	std::cout << character[i] << " ";
	// }
	std::cout << std::endl;
	Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    // {
        Array<int> tmp = numbers;
        Array<int> test(numbers);
    // }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
	for (int i = 0; i < MAX_VAL; i++)
    {
		std::cout << numbers[i] << " ";
	}
	std::cout << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
    {
		std::cout << tmp[i] << " ";
	}
	std::cout << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
    {
		std::cout << test[i] << " ";
	}
	std::cout << std::endl;
	
    return 0;
}