// preprocessor directives
#include <iomanip>
#include <iostream>
#include <string>

// namespaces for functionalities
using namespace std;

// class for the object
class BankAccount {
  // private variables and methods
private:
  double balance;
  double previousTransaction;
  string customerName;
  string customerId;

  // public varibales and methods
public:
  // constructor
  BankAccount(string cName, string cId) {
    // assinging parameters to private varibales
    customerName = cName;
    customerId = cId;
  }

  // method for deposit process
  void deposit(double amount) {
    // checking if the amount entered is not null
    if (amount != 0.0) {
      // adding the entered amount to the balance
      balance += amount;

      // assigning the current amount to previous transaction
      previousTransaction = amount;
    } else {
      // displaying the required message if the entered value is null
      cout << "No changes were made!" << endl;
    }
  }

  // method for withdraw process
  void withdraw(double amount) {
    // checking if the amount entered is not null
    if (amount != 0.0) {
      // deducting the entered amount from the balance
      balance -= amount;
      // setting the input amount as the previous transaction
      previousTransaction = amount;
    } else {
      // output
      cout << "No changes were made!" << endl;
    }
  }

  // method to dispaly the prevoius transaction
  void getPreviousTransaction() {
    // checking if the prevoius transaction is zero
    if (previousTransaction > 0) {
      // output
      cout << "Deposited : " << previousTransaction << endl;
    } // checking if the previous transaction is greater than 0
    else if (previousTransaction < 0) {
      // output
      cout << "Withdrawn : " << fixed << setprecision(2) << previousTransaction
           << endl;
    } else {
      // output
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