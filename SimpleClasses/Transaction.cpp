#include "Transaction.h"

Transaction::Transaction(int value, std::string message):amount(amount), type(type)
{
    amount = value;
    type = message;
}

Transaction::Report(void)
{
    std::string report;
    report += "  ";
    report += type;
    report += "  ";
    report += to_string(amount);

    return report;
}