#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum) {
        accountNumber = accNum;
        balance = 0.0; 
    }
    BankAccount(int accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }
    void displayAccount() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};
int main() {
    
    BankAccount account1(12345);
    cout << "Account 1 Details:" << endl;
    account1.displayAccount();
    cout << endl;

    BankAccount account2(67890, 1500.50);
    cout << "Account 2 Details:" << endl;
    account2.displayAccount();

    return 0;
}
