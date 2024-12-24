/*Create a simple Bank Account class with a method to withdraw money. Throw
an exception if the withdrawal amount exceeds the account balance.*/

#include <iostream>
using namespace std;

class BankAccount {
    int balance;

public:
    BankAccount(int initialBalance) : balance(initialBalance) {}

    void withdraw(int amount) {
        if (amount > balance) {
            cout << "Error: Withdrawal amount exceeds balance" << endl;
            return;
        }
        balance -= amount;
    }

    int getBalance() const {
        return balance;
    }
};

int main() {
    int initialBalance, withdrawalAmount;
    cout << "Enter initial balance:-  ";
    cin >> initialBalance;
    cout << "Enter withdrawal amount:-  ";
    cin >> withdrawalAmount;

    BankAccount account(initialBalance);
    account.withdraw(withdrawalAmount);
    cout << "New balance: " << account.getBalance() << endl;

    return 0;
}

