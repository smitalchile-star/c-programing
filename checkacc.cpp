#include <iostream>
using namespace std;

class checkingAccount
{
private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double transactionFee;

public:
    checkingAccount(string name, int accNumber, double initialBalance, double fee)
    {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
        transactionFee = fee;
    }

    void deposit(double amount)
    {
        balance = balance + amount - transactionFee;
        cout << "Amount deposited: " << amount << endl;
        cout << "Transaction fee: " << transactionFee << endl;
        cout << "New balance: " << balance << endl;
    }

    void withdraw(double amount)
    {
        if (amount + transactionFee <= balance)
        {
            balance = balance - amount - transactionFee;
            cout << "Amount withdrawn: " << amount << endl;
            cout << "Transaction fee: " << transactionFee << endl;
            cout << "New balance: " << balance << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    void display()
    {
        cout << "\n--- Checking Account Details ---" << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Transaction Fee: " << transactionFee << endl;
    }
};

int main()
{
    checkingAccount acc("Smital", 101, 5000, 20);

    acc.display();

    cout << "\nAfter Deposit:" << endl;
    acc.deposit(1000);

    cout << "\nAfter Withdrawal:" << endl;
    acc.withdraw(500);

    return 0;
}
