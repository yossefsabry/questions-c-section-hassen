#include <iostream>

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
            std::cout << "Deposit of $" << amount << " successful." << std::endl;
        }
        else
        {
            std::cout << "Invalid deposit amount. Please enter a positive amount." << std::endl;
        }
    }

    // Member function to withdraw money
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            std::cout << "Withdrawal of $" << amount << " successful." << std::endl;
        }
        else if (amount <= 0)
        {
            std::cout << "Invalid withdrawal amount. Please enter a positive amount." << std::endl;
        }
        else
        {
            std::cout << "Insufficient funds for withdrawal." << std::endl;
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
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }
};

int main()
{
    // Example usage
    BankAccount myAccount(123456, 1000.0);

    // Display initial account information
    std::cout << "Initial Account Information:" << std::endl;
    myAccount.displayInfo();

    // Deposit money
    myAccount.deposit(500.0);

    // Display updated account information
    std::cout << "\nUpdated Account Information:" << std::endl;
    myAccount.displayInfo();

    // Withdraw money
    myAccount.withdraw(200.0);

    // Display final account information
    std::cout << "\nFinal Account Information:" << std::endl;
    myAccount.displayInfo();

    return 0;
}
