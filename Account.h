/*
 * Account.h
 *
 *  Created on: Dec 8, 2014
 *      Author: explicitness
 */


#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <vector>
#include <string>
#include "Transaction.h"

class Account
{
private:
	int balance;
	std::vector<Transaction> log;

public:
	Account();
	std::vector<std::string> Report();
	bool Deposit(int amt);
	bool Withdraw(int amt);
};



#endif /* ACCOUNT_H_ */
