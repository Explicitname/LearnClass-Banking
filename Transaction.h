/*
 * Transaction.h
 *
 *  Created on: Dec 8, 2014
 *      Author: explicitness
 */

#ifndef TRANSACTION_H_
#define TRANSACTION_H_

#include <string>

class Transaction
{
private:
	int amount;
	std::string type;

public:
	Transaction(int amt, std::string kind);
	std::string Report();
};



#endif /* TRANSACTION_H_ */
