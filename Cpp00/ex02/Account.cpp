#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbWithdrawals = 0;
int Account::_totalNbDeposits = 0;

Account::Account(int initial_deposit) {
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_nbAccounts << ';';
	this->_amount = initial_deposit;
	std::cout << "amount" << this->_amount << ';';
	std::cout << "created" <<std::endl;
	this->_nbWithdrawals = 0;
	this->_nbDeposits = 0;
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	Account::_totalAmount+= initial_deposit;
}
Account::~Account() {
	Account::_displayTimestamp();
	std::cout << "index:" <<this->_accountIndex << ';';
	std::cout << "amount" <<this->_amount << ';';
	std::cout << "closed" << std::endl;
}

void Account::displayStatus() const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "amount:" << this->_amount << ';';
	std::cout << "Deposits:" << this->_nbDeposits << ';';
	std::cout << "Withdrawal:" <<this->_nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos(void) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ';';
	std::cout << "total:" << Account::getTotalAmount() << ';';
	std::cout << "deposits:" << Account::getNbDeposits() << ';';
	std::cout << "withdrawals:" << Account::getNbWithdrawals() <<std::endl;
}

int Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int Account::getTotalAmount(void) {
	return Account::_totalAmount;
}

int Account::getNbDeposits(void) {
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
	return  Account::_totalNbWithdrawals;
}

void Account::makeDeposit(int deposit) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "p_amount:" << this->_amount << ';';
	std::cout << "deposit:" << deposit << ';';
	this->_amount += deposit;
	std::cout << "amount:" << this->_amount << ';';
	this->_nbDeposits++;
	std::cout << "Deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';';
	std::cout << "p_amount:" << this->_amount << ';';
	if(this->_amount < withdrawal){
		std::cout << "withdrawal:" << "refused" << std::endl;
		return  false;
	}
	this->_amount -= withdrawal;
		std::cout << "withdrawal:" << withdrawal << ';';
	std::cout << "amount:" << this->_amount << ';';
	this->_nbWithdrawals++;
	std::cout << "Deposits:" << this->_nbWithdrawals << std::endl;
		return  true;


}
void Account::_displayTimestamp() {
	std::time_t t = std::time(NULL);

	std::tm now = *localtime(&t);
	std::cout
			<< "["
			<< (now.tm_year + 1900)
			<< std::setfill('0')
			<< std::setw(2) << now.tm_mon + 1
			<< std::setw(2) << now.tm_mday << "_"
			<< std::setw(2) << now.tm_hour
			<< std::setw(2) << now.tm_min
			<< std::setw(2) << now.tm_sec
			<< "] ";
}


