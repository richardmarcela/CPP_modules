#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime> // time(), localtime()

using std::endl;
using std::cout;
using std::setw;
using std::setfill;

/* Init variáveis estáticas */
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/* Construtor sem parametros */
Account::Account() {};

/* Construtor */
Account::Account (int initial_deposit) {
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _displayTimestamp();
    cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << endl;
    _nbAccounts++;
    _totalAmount += initial_deposit;
}

/* Destrutor */
Account::~Account() {
    _displayTimestamp();
    cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << endl;
}

int Account::getNbAccounts(void) {
    return _nbAccounts;
}

int Account::getTotalAmount(void) {
    return _totalAmount;
}

int Account::getNbDeposits(void) {
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) {
    _displayTimestamp();
    cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << endl;
}

void Account::makeDeposit(int deposit) {
    _nbDeposits++;
    _displayTimestamp();
    cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << ";amount:" << _amount + deposit << ";nb_deposit:" << _nbDeposits << endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    if (_amount - withdrawal < 0)
    {
        _displayTimestamp();
        cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << endl;
        return false;
    }
    _nbWithdrawals++;
    _displayTimestamp();
    cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal << ";amount:" << _amount - withdrawal << ";nb_withdrawals:" << _nbWithdrawals << endl;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    return true;
}

int Account::checkAmount(void) const {
    return _amount;
}

void Account::displayStatus(void) const {
    _displayTimestamp();
    cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << endl;
}

void Account::_displayTimestamp(void) {
    time_t result;
    /* guarda componentes de um calendario: ano, mes, dia, hora, minuto e segundo */
    struct tm *time_stamp;

    /* tempo atual em segundos desde o epoch */
    std::time(&result);
    /* transforma em [YYYYMMDD_HHMMSS] */
    time_stamp = localtime(&result);
    cout << "[";
    cout << time_stamp->tm_year + 1900;
    cout << setw(2) << setfill('0') << time_stamp->tm_mon + 1;
    cout << setw(2) << setfill('0') << time_stamp->tm_mday << "_";
    cout << setw(2) << setfill('0') << time_stamp->tm_hour;
    cout << setw(2) << setfill('0') << time_stamp->tm_min;
    cout << setw(2) << setfill('0') << time_stamp->tm_sec;
    cout << "] ";
}