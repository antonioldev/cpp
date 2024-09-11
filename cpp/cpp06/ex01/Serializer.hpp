#pragma once
#ifndef SERIALIZER_DOT_HPP
#define SERIALIZER_DOT_HPP

#include <iostream>
#include <string>
#include <stdint.h>
#include "data.hpp"
#define RST "\033[0m"
#define BOLD "\033[1m"
#define R "\033[1;31m"

class Serializer
{
private:
	Serializer();
	virtual Serializer& operator=(const Serializer& other) = 0;
	Serializer(const Serializer& other);
	~Serializer();
public:
	// Serializer();
	// virtual Serializer& operator=(const Serializer& other) = 0;
	// Serializer(const Serializer& other);
	// ~Serializer();
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};

#endif