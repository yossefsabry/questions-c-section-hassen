#include <iostream>
using namespace std;

/*
Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.
*/

class BankAccount
{
private:
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(int accNumber, double initialBalance)
        : accountNumber(accNumber), balance(initialBalance) {}

    // Member function to deposit money
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposit of $" << amount << " successful." << endl;
        }
        else
        {
            cout << "Invalid deposit amount. Please enter a positive amount." << endl;
        }
    }

    // Member function to withdraw money
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful." << endl;
        }
        else if (amount <= 0)
        {
            cout << "Invalid withdrawal amount. Please enter a positive amount." << endl;
        }
        else
        {
            cout << "Insufficient funds for withdrawal." << endl;
        }
    }

    // Member function to get current balance
    double getBalance() const
    {
        return balance;
    }

    // Member function to display account information
    void displayInfo() const
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main()
{
    // Example usage
    BankAccount myAccount(123456, 1000.0);

    // Display initial account information
    cout << "Initial Account Information:" << endl;
    myAccount.displayInfo();

    // Deposit money
    myAccount.deposit(500.0);

    // Display updated account information
    cout << "\nUpdated Account Information:" << endl;
    myAccount.displayInfo();

    // Withdraw money
    myAccount.withdraw(200.0);

    // Display final account information
    cout << "\nFinal Account Information:" << endl;
    myAccount.displayInfo();

    return 0;
}
