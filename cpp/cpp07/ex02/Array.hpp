#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
	private:
		unsigned int sizeArray;
		T*	arr;
	public:
		Array();
		Array(unsigned int n);
		Array& operator=(const Array& other);
		Array(const Array& other);
		~Array();
		unsigned int size() const;
		T& operator[](int index);
};
#include "Array.tpp"
#endif

// template <typename T>
// Array<T>::Array() : sizeArray(0), arr(NULL)
// {
	
// }
// template <typename T>
// Array<T>::Array(unsigned int n) : sizeArray(n), arr(new T[n])
// {

// }
// template <typename T>
// Array<T>::~Array()
// {
// 	delete[] arr;
// }
// template <typename T>
// unsigned int Array<T>::size() const
// {
// 	return(this->sizeArray);
// }

// template <typename T>
// T& Array<T>::operator[](int index)
// {
// 	if (index < 0 || (unsigned int)index >= this->size())
// 	{
// 		throw std::out_of_range("Array index out of bounds");
// 	}	
// 	return (arr[index]);
// }

// template <typename T>
// Array<T>& Array<T>::operator=(const Array& other)
// {
// 	if (this != &other)
// 	{
// 		delete[] arr;
// 		sizeArray = other.sizeArray;
// 		arr = new T[other.sizeArray];
// 		std::copy(other.arr, other.arr + other.sizeArray, arr);
// 	}
// 	return (*this);
// }

// template <typename T>
// Array<T>::Array(const Array& other): sizeArray(other.sizeArray), arr(new T[other.sizeArray])
// {
// 	std::copy(other.arr, other.arr + other.sizeArray, arr);
// }