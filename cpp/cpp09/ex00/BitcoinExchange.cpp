#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::ifstream& dbExchangeRateFile, std::ifstream& dbValueFile)
{
	std::string line;
	if (std::getline(dbExchangeRateFile, line))
	{
		if (line == "date,exchange_rate")
			std::getline(dbExchangeRateFile, line);
	}
	while (std::getline(dbExchangeRateFile, line))
	{
		std::string key;
		std::string valueString;
		float value;
		size_t pos = line.find(',');
		key = line.substr(0, pos);
		valueString = line.substr(pos + 1);
		valueString.erase(valueString.find_last_not_of("\n\r") + 1);
		value = stringToFloat(valueString);
		dbExchangeRate.insert(std::make_pair(key, value));
	}
	(void) dbValueFile;
}

BitcoinExchange::~BitcoinExchange()
{
}
	
BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
	: dbExchangeRate(other.dbExchangeRate)
{
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	if (this != &other)
	{
		dbExchangeRate = other.dbExchangeRate;
	}
	return *this;
}

void BitcoinExchange::calculateValue(std::ifstream& dbValueFile)
{
	std::string line;
	if (std::getline(dbValueFile, line))
	{
		if (line == "date | value")
			std::getline(dbValueFile, line);
	}
	while (std::getline(dbValueFile, line))
	{
		std::string key;
		std::string valueString;
		float value;
		size_t pos = line.find(" | ");
		key = line.substr(0, pos);
		valueString = line.substr(pos + 3);
		valueString.erase(valueString.find_last_not_of("\n\r") + 1);
		if (isValidEntry(key, valueString, value))
		{
			std::string str_result;
			float result;
			for (std::multimap<std::string, float>::const_iterator it = dbExchangeRate.begin(); it != dbExchangeRate.end(); ++it)
			{
				if (it->first <= key)
				{
					str_result = it->first;
					result = it->second;
				}
				else
					break ;
			}
			std::cout << str_result << " => " << value << " = " << value * result << std::endl;
		}
	}
}

