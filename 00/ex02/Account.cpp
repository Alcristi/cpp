#include "Account.hpp"
#include <ctime>
#include <string>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
    return _nbAccounts;
}

int Account::getTotalAmount(void)
{
    return _totalAmount;
}

int Account::getNbDeposits(void)
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
    std::time_t currentTime;
    std::time(&currentTime);
    std::tm *localTime = std::localtime(&currentTime);
    char timeStamp[25];

    std::strftime(timeStamp, sizeof(timeStamp), "[%Y%m%d_%H%M%S] ", localTime);

    std::cout << timeStamp ;
}

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts)
{
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;

    _totalAmount += initial_deposit;

    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;

    _nbAccounts += 1;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

Account::Account(void) : _accountIndex(_nbAccounts)
{
    this->_amount = 0;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;

    _totalAmount += 0;

    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;

    _nbAccounts += 1;
}

int Account::checkAmount(void) const
{
    return this->_amount;
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit << ";amount:" << this->_amount + deposit << ";nb_deposits:" << this->_nbDeposits << std::endl;
    this->_amount += deposit;
    _totalAmount += deposit;
    this->_nbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    if (withdrawal > this->_amount)
    {
        std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:"
                  << "refused" << std::endl;
        return false;
    }
    else
    {
        std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount - withdrawal << ";nb_withdrawal:" << this->_nbWithdrawals << std::endl;
        this->_amount -= withdrawal;
        _totalAmount -= withdrawal;
        this->_nbWithdrawals++;
        return true;
    }
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount  << ";deposits:" << this->_nbDeposits << ";withdrawal:" << this->_nbWithdrawals << std::endl;

}