#include <iostream>

#include "BitcoinExchange.hpp"

//Using multi map container

int main(int ac, char** av)
{
	if (ac == 1)
		std::cerr << R << "No file provided\n" << RST;
	else if (ac > 2)
		std::cerr << R << "Too many files provided\n" << RST;
	else
	{
		std::ifstream db_exchange_rate_file("data.csv");
		std::ifstream db_to_compare_file(av[1]);
		if (!db_exchange_rate_file.is_open() || !db_to_compare_file.is_open())
			return (std::cerr << R << "Error opening database. Database may be missing or corrupted\n", 1);
		BitcoinExchange db(db_exchange_rate_file, db_to_compare_file);
		db.calculateValue(db_to_compare_file);
		db_exchange_rate_file.close();
		db_to_compare_file.close();
	}
	return (0);
}