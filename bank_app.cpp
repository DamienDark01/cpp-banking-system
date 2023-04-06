// preprocessor directives
#include <iostream>
#include <string>
#include <iomanip>

// namespaces for functionalities
using namespace std;

// class for the object
class BankAccount {
private:
  double balance;
  double previousTransaction;
  string customerName;
  string customerId;

public:
  BankAccount(string cName, string cId) {
    customerName = cName;
    customerId = cId;
  }

  void deposit(double amount) {
    if (amount != 0.0) {
      balance += amount;
      previousTransaction = amount;
    } else {
      cout << "No changes were made!" << endl;
    }
  }

  void withdraw(double amount) {
    if (amount != 0.0) {
      balance -= amount;
      previousTransaction = amount;
    } else {
      cout << "No changes were made!" << endl;
    }
  }

  void getPreviousTransaction() {
    if (previousTransaction > 0) {
      cout << "Deposited : " << previousTransaction << endl;
    } else if (previousTransaction < 0) {
      cout << "Withdrawn : " << fixed << setprecision(2) << previousTransaction << endl;
    } else {
      cout << "No transaction has occured" << endl;
    }
  }

  void showMenu() {
    char option;

    cout << endl;
    cout << "Welcome " << customerName << "!" << endl;
    cout << "Your Bank ID : " << customerId << endl;
    cout << "A. Check balance" << endl;
    cout << "B. Deposit" << endl;
    cout << "C. Withdraw" << endl;
    cout << "D. Check previous transaction" << endl;
    cout << "E. Exit" << endl;
    cout << "====================================" << endl;
    cout << "Enter an option : ";
    cin >> option;
    cout << "====================================" << endl;
  }
};

int main(void) {}