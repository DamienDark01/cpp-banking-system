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

  
};

int main(void) {}