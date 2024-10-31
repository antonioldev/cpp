#include "BitcoinExchange.hpp"

bool date_match(const std::string& date)
{
	if (date.length() != 10)
		return false;
	if (!isdigit(date[0]) || !isdigit(date[1]) || !isdigit(date[2]) || !isdigit(date[3]) ||
		date[4] != '-' ||
		!isdigit(date[5]) || !isdigit(date[6]) ||
		date[7] != '-' ||
		!isdigit(date[8]) || !isdigit(date[9])) {
		return false;
	}
	return true;
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

bool isValidEntry(const std::string& key, const std::string& valueString, float& value)
{
	if (key.empty() || valueString.empty())
		throw std::runtime_error("Error reading the entry. Format must be YYYY-MM-DD | Value");
	if (valueString.find("  ") != std::string::npos)
		throw std::runtime_error("Invalid value format (extra spaces): " + valueString);
	if (!date_match(key))
		throw std::runtime_error("Invalid date format: " + key);
	int year, month, day;
	if (std::sscanf(key.c_str(), "%d-%d-%d", &year, &month, &day) != 3)
		throw std::runtime_error("Date parsing failed: " + key);
	if (month < 1 || month > 12)
		throw std::runtime_error("Invalid month: " + std::to_string(month) + " in date: " + key);
	if (day < 1 || day > 31)
		throw std::runtime_error("Invalid day: " + std::to_string(day) + " in date: " + key);
	if (!value_match(valueString))
		throw std::runtime_error("Invalid number format: " + valueString);
	value = std::stoi(valueString);
	if (value < 0 || value > 1000)
		throw std::runtime_error("Integer out of range (0-1000): " + std::to_string(value));

	return true;
}