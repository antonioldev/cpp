#include "BitcoinExchange.hpp"

float BitcoinExchange::stringToFloat(const std::string& str)
{
	std::stringstream ss(str);
	float result;
	ss >> result;
	if (ss.fail())
		throw std::invalid_argument("Invalid float format");
	return result;
}

bool date_match(const std::string& date)
{
	if (date.length() != 10)
		return false;
	if (!isdigit(date[0]) || !isdigit(date[1]) || !isdigit(date[2]) || !isdigit(date[3]) ||
		date[4] != '-' || !isdigit(date[5]) || !isdigit(date[6]) ||
		date[7] != '-' || !isdigit(date[8]) || !isdigit(date[9])) {
		return false;
	}
	return true;
}

bool date_validate(int year, int month, int day)
{
	if (year < 0 || month < 1 || month > 12 || day < 1)
		return false;
	int maxDay;
	switch (month)
	{
		case 2:
			maxDay = 28;
		if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
			maxDay = 29;
		break;
		case 4: case 6: case 9: case 11: maxDay = 30; break;
		default: maxDay = 31; break;
	}
	return day <= maxDay;
}

bool value_match(const std::string& value)
{
	bool hasDecimal = false;
	bool hasDigits = false;
	for (size_t i = 0; i < value.length(); ++i)
	{
		if (isdigit(value[i]))
		{
			hasDigits = true;
		}
		else if (value[i] == '.')
		{
			if (hasDecimal)
				return false;
			hasDecimal = true;
		}
		else
			return false;
	}
	return hasDigits;
}

bool BitcoinExchange::isValidEntry(const std::string& key, const std::string& valueString, float& value)
{
	if (key.empty() || valueString.empty())
		return(std::cerr << "Error reading the entry. Format must be YYYY-MM-DD | Value\n", false);
	if (valueString.find("  ") != std::string::npos)
		return(std::cerr << "Invalid value format (extra spaces): " + valueString << std::endl, false);
	if (!date_match(key))
		return(std::cerr << "Invalid date format: " + key << std::endl, false);
	int year, month, day;
	if (std::sscanf(key.c_str(), "%d-%d-%d", &year, &month, &day) != 3)
		return(std::cerr << "Date parsing failed: " + key << std::endl, false);
	if (!date_validate(year, month, day))
		return(std::cerr << "Invalid date: " + key << std::endl, false);
	if (!value_match(valueString))
		return(std::cerr << "Invalid number format: " + valueString << std::endl, false);
	value = stringToFloat(valueString);
	if (value < 0 || value > 1000)
		return(std::cerr << "Integer out of range (0-1000)\n", false);
	return (true);
}