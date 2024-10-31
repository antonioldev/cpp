#pragma once

#include <fstream>
#include <string>
#include <map>
#include <cstring>
#include <iostream>

#define RST "\033[0m"	// Reset to default color
#define BOLD "\033[1m"	// Bold
#define R "\033[1;31m"	// Red
#define G "\033[1;32m"	//Green

class BitcoinExchange
{
public:
	BitcoinExchange(std::ifstream& dbExchangeRateFile, std::ifstream& dbValueFile);
	BitcoinExchange(const BitcoinExchange& other);
	BitcoinExchange& operator=(const BitcoinExchange& other);
	~BitcoinExchange();
	//void printDatabase();
	void calculateValue(std::ifstream& dbValueFile);

private:
	std::multimap<std::string, float> dbExchangeRate;
};

bool isValidEntry(const std::string& key, const std::string& valueString, float& value);
