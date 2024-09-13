#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array() : sizeArray(0), arr(NULL)
{
	
}
template <typename T>
Array<T>::Array(unsigned int n) : sizeArray(n), arr(new T[n])
{

}
template <typename T>
Array<T>::~Array()
{
	delete[] arr;
}
template <typename T>
unsigned int Array<T>::size() const
{
	return(this->sizeArray);
}

template <typename T>
T& Array<T>::operator[](int index)
{
	if (index < 0)
		throw std::out_of_range("Array index can't be negative");
	if ((unsigned int)index >= this->size())
		throw std::out_of_range("Array index out of bounds");
	return (arr[index]);
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	if (this != &other)
	{
		delete[] arr;
		sizeArray = other.sizeArray;
		arr = new T[other.sizeArray];
		std::copy(other.arr, other.arr + other.sizeArray, arr);
	}
	return (*this);
}

template <typename T>
Array<T>::Array(const Array& other): sizeArray(other.sizeArray), arr(new T[other.sizeArray])
{
	std::copy(other.arr, other.arr + other.sizeArray, arr);
}

#endif