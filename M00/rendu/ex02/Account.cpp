#include "Account.hpp"
#include <iostream>
#include <ctime>

Account::Account( int initial_deposit ) :
				_accountIndex( _nbAccounts ),
				_amount( initial_deposit ),
				_nbDeposits( 0 ),
				_nbWithdrawals( 0 ) {
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";created" << std::endl;
	_nbAccounts++;
	_totalAmount += _amount;
}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";closed" << std::endl;
	_nbAccounts--;
	_totalAmount -= _amount;
}

void Account::makeDeposit( int deposit ) {
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";";
	std::cout << " p_amount:" << _amount << ";";
	std::cout << " deposit:" << deposit << ";";
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << " amount:" << _amount << ";";
	std::cout << " nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";";
	std::cout << " p_amount:" << _amount << ";";
	std::cout << " withdrawal:";
	if ( _amount < withdrawal ) {
		std::cout << " refused" << std::endl;
		return false;
	}
	std::cout << withdrawal << ";";
	_amount -= withdrawal;	
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << " amount:" << _amount << ";";
	std::cout << " nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int Account::checkAmount( void ) const {
	return _amount;
}

void Account::displayStatus( void )  const {
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";";
	std::cout << " amount:" << _amount << ";";
	std::cout << " deposits:" << _nbDeposits << ";";
	std::cout << " withdrawals:" << _nbWithdrawals << std::endl;
}


int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void) {
	time_t now = std::time(NULL);
	//time machine sec -> localtime struct
    struct tm *lt = std::localtime(&now);
    char buffer[20]; // "YYYYMMDD_HHMMSS"
    std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", lt);
	std::cout << "[" << buffer << "]";
}

int		Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int		Account::getTotalAmount( void ) {
	return _totalAmount;
}

int		Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}

int		Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}
