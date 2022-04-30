#include <iostream>
#include <string>
#include "account.hpp"
#include <time.h>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit){
	this->_accountIndex = this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "Index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout << "Index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";Closed" << std::endl;
}

int	Account::getter_amount() {
	return (this->_amount);
}

int	Account::getter_index() {
	return (this->_accountIndex);
}

int	Account::getter_deposit() {
	return (this->_nbDeposits);
}

int	Account::getter_withdrawal() {
	return (this->_nbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "Accounts:" << _nbAccounts;
	std::cout << ";Total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "Index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	this->_nbDeposits++;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposit:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "Index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	if (withdrawal > this->_amount) {
		std::cout << ";withdrawal:refused" << std::endl;
		return (0);
	}
	std::cout << ";withdrawal:" << withdrawal;
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (1);
}

void	Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << "Index:" << this->_accountIndex;
	std::cout << ";Amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void) {

	char 		dst[16];
	struct tm 	*format_time;
	time_t		real_time;

	time(&real_time);
	format_time = localtime(&real_time);
	strftime(dst, 16, "%G%m%e_%H%M%S",format_time);
	std::cout << "[" << dst << "]";
}
