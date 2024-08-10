#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account :: getNbAccounts( void )
{
	return Account :: _nbAccounts;
}

int	Account :: getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account :: getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account :: getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}
void	Account :: displayAccountsInfos( void )
{

	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account :: Account( int initial_deposit )
{
	_accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _totalAmount += initial_deposit;
    _nbAccounts++;
	_displayTimestamp();
	std :: cout << "index:" << _accountIndex << ";";
	std :: cout << "amount:" << _amount << ";created" << std :: endl;
}

Account :: ~Account( void )
{
	_nbAccounts--;
	_displayTimestamp();
	std :: cout << "index:" << _accountIndex << ";";
	std :: cout << "amount:" << _amount << ";";
	std :: cout << "closed" << std :: endl;
}

void	Account :: makeDeposit( int deposit )
{
	_displayTimestamp();
	std :: cout << "index:" << _accountIndex << ";";
	std :: cout << "p_amount:" << _amount << ";";
	std :: cout << "deposit:" << deposit << ";";
	_totalAmount += deposit;
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std :: cout << "amount:" << _amount << ";";
	std :: cout << "nb_deposits:" << _nbDeposits << std :: endl;

}

bool	Account :: makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std :: cout << "index:" << _accountIndex << ";";
	std :: cout << "p_amount:" << _amount << ";";
	if (withdrawal > _amount)
	{
		std :: cout << "withdrawal:refused" << std :: endl;
		return (false);
	}
	_totalAmount -= withdrawal;
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std :: cout << "withdrawal:" << withdrawal << ";";
	std :: cout << "amount:" << _amount << ";";
	std :: cout << "nb_withdrawals:" << _nbWithdrawals << std :: endl;
	return (true);
}

int	Account :: checkAmount( void ) const
{
	return (0);
}
void	Account :: displayStatus( void ) const
{
	_displayTimestamp();
	std :: cout << "index:" << _accountIndex << ";";
	std :: cout << "amount:" << _amount << ";";
	std :: cout << "deposits:" << _nbDeposits << ";";
	std :: cout << "withdrawals:" << _nbWithdrawals << std :: endl;
	
}
void	Account :: _displayTimestamp( void )
{
	time_t currentTime = time(NULL);
    tm* localTime = localtime(&currentTime);
    char formattedTime[19];
    strftime(formattedTime, sizeof(formattedTime), "[%Y%m%d_%H%M%S] ", localTime);
    std::cout << formattedTime;
}

Account :: Account( void )
{

}
