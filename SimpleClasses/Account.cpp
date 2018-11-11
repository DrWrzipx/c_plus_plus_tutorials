#include "Account.h"

Account::Account(void):balance(0)
{

}

std::vector<std:string> Account::Report(void)
{
    std::vector<std::string> reportDocument;
    reportDocument.push_back("Balance is ") + to_string(balance);
    reportDocument.push_back("Transactions: ");
    for(auto t:log)
    {
        reportDocument.push_back(t.Report());
    }
    report.push_back("-----------------------------------");

    return reportDocument;
}

bool Account::Deposit(int amt)
{
    if(amt >= 0)
    {
        balance += amt;
        log.push_back(Transaction(amt, "Deposit"));
        return true;
    }
    else
    {
        log.push_back(Transaction(amt, "AMT < 0"))
        return false;
    }
}

bool Account::Withdraw(int amt)
{
    if(amt >= 0)
    {
        balance -= amt;
        if(balance <= 0)
        {
            log.push_back(Transaction(amt, "You come to limit!"))
            return false;
        }
        else
        {
            log.push_back(Transaction(amt, "Withdraw"));
            return true;
        }
    }
    else
    {
        log.push_back(Transaction(amt, "AMT < 0"))
        return false;
    
}