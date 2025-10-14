#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <iomanip>


class BankAccount {
public:

	std::string accountNumber;
	std::string accountName;
	double balance = 0;

	BankAccount(std::string accNumber, std::string accName, double initialBalance)
	{
		
		accountNumber = accNumber;
		accountName = accName;
		balance = initialBalance;
	}

	void DisplayAccountDetails(std::string accNumber)
	{
		std::cout << "Account number  : " << accountNumber << '\n';
		std::cout << "Account name    : " << accountName << '\n';
		std::cout << "Account balance : " << std::fixed << std::setprecision(2) << balance << '\n';
	}

	void Deposit(double depositAmount)
	{
		balance += depositAmount;
		std::cout << "Deposit successful.\n";
		std::cout << "Balance: " << std::fixed << std::setprecision(2) << balance << '\n';
	}

	void Widthdraw(double widthdrawAmount)
	{
		balance -= widthdrawAmount;
		std::cout << "Widthdraw successful.\n";
		std::cout << "Balance: " << std::fixed << std::setprecision(2) << balance << '\n';
	}
};

BankAccount account1("123456", "John Doe", 1000.0);
double depositAmount = 0;
double withdrawAmount = 0;

int main()
{
	while (true) {

		int choice;
		std::cout << "*******************\n";
		std::cout << "Enter yout choice\n";
		std::cout << "*******************\n";
		std::cout << "1. Deposit\n";
		std::cout << "2. Withdraw\n";
		std::cout << "3. Show accout details\n";

		std::cin >> choice;
		std::cin.get();
		
		system("cls");
		

		

		switch (choice) {
		case 1: 
			std::cout << "Enter deposit amount: ";
			std::cin >> depositAmount;
			account1.Deposit(depositAmount);
			std::cin.ignore();
			std::cin.get();
			system("cls");
			break;
		case 2:
			std::cout << "Enter withdraw amount: ";
			std::cin >> withdrawAmount;
			account1.Widthdraw(withdrawAmount);
			std::cin.ignore();
			std::cin.get();
			system("cls");
			break;
		case 3: account1.DisplayAccountDetails(account1.accountNumber);
			std::cin.get();
			system("cls");
			break;
		default: std::cout << "Invalid choice\n";
			std::cin.get();
			system("cls");
			break;
		}

	}

	return 0;
}