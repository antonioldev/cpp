#pragma once

#include <fstream>
#include <string>
#include <map>
#include <cstring>

#define RST "\033[0m"	// Reset to default color
#define BOLD "\033[1m"	// Bold
#define R "\033[1;31m"	// Red
#define G "\033[1;32m"	//Green

class BitcoinExchange
{
public:
	BitcoinExchange(std::ifstream& file, const char separator);
	BitcoinExchange(std::ifstream& file, const std::string separator);
	BitcoinExchange(const BitcoinExchange& other);
	BitcoinExchange& operator=(const BitcoinExchange& other);
	~BitcoinExchange();
	void printDatabase();
	void calculateValue(const std::multimap<std::string, int> base);
	std::multimap<std::string, int> getDb();

private:
	std::multimap<std::string, int> database;
};

bool isValidEntry(const std::string& key, const std::string& valueString, float& value);
