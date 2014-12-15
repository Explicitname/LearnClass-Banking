/*
 * Transaction.cpp
 *
 *  Created on: Dec 8, 2014
 *      Author: explicitness
 */

#include "Transaction.h"

using namespace std;

Transaction::Transaction(int amt, std::string kind):amount(amt),type(kind)
{

}




string Transaction::Report()

{
	string report;
	report += "   ";
	report += type;
	report += " ";
	report += to_string(amount);

	return report;

}


