#include "BitcoinExchange.hpp"
#include <iostream>


BitcoinExchange::BitcoinExchange(std::ifstream& file, const std::string separator)
{
	std::string line;
	if (std::getline(file, line))
	{
		if (line == "date | value")
			std::getline(file, line);
		else
			throw std::runtime_error("First line doesn't match standard 'date | value'\n");
	}
	while (std::getline(file, line))
	{
		std::string key;
		std::string valueString;
		float value;
		size_t pos = line.find(separator);
		key = line.substr(0, pos);
		valueString = line.substr(pos + separator.length());
		valueString.erase(valueString.find_last_not_of("\n\r") + 1);
		if (!isValidEntry(key, valueString, value)) {
			throw std::runtime_error("Invalid entry: " + line);
		}
		database.insert(std::make_pair(key, value));
	}
}

BitcoinExchange::BitcoinExchange(std::ifstream& file, const char separator)
{
	std::string line;
	if (std::getline(file, line))
	{
		if (line == "date,exchange_rate")
			std::getline(file, line);
		else
			throw std::runtime_error("First line doesn't match standard 'date,exchange_rate'\n");
	}
	while (std::getline(file, line))
	{
		std::string key;
		std::string valueString;
		float value;
		size_t pos = line.find(separator);
		key = line.substr(0, pos);
		valueString = line.substr(pos + 1);
		valueString.erase(valueString.find_last_not_of("\n\r") + 1);
		//if (!isValidEntry(key, valueString, value)) {
		//	throw std::runtime_error("Invalid entry: " + line); // Stop processing on error
		//}
		database.insert(std::make_pair(key, value));
	}
}

BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::printDatabase()
{
	for (std::multimap<std::string, int>::const_iterator it = database.begin(); it != database.end(); ++it)
	{
		std::cout << "Date:" << it->first << "_|_Value:" << it->second << "." << std::endl;
	}
}

std::multimap<std::string, int> BitcoinExchange::getDb()
{
	return database;
}
	
BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
	: database(other.database)
{
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	if (this != &other)
		database = other.database;
	return *this;
}

void BitcoinExchange::calculateValue(const std::multimap<std::string, int> base)
{
	std::string key;
	float value;
	for (std::multimap<std::string, int>::const_iterator it = database.begin(); it != database.end(); ++it)
	{
		for (std::multimap<std::string, int>::const_iterator it2 = base.begin(); it2 != base.end(); ++it2)
		{
			//if it->first <= it2->first
			key = it2->first;
			value = it->second * it2->second;
		}
		std::cout << "Key (Date): " << key << " | Value: " << value << std::endl;

		
	}
}
