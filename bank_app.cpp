#include <iostream>
#include <string>

using namespace std;

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
      cout << "Withdrawn : " << previousTransaction << endl;
    } else {
      cout << "No transaction has occured" << endl;
    }
  }

  void showMenu() {
    
  }
};

int main(void) {}