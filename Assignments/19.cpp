/*   Write a program to simulate an online purchase. If the debit card number is
invalid or the balance is insufficient, throw an exceptions for each case and handle
them in separate catch blocks.   */

#include <iostream>
using namespace std;

struct DebitCard {
    int number;
    double balance;
};

void makePurchase(DebitCard& card, double amount) {
    if (card.number < 0) {
        cout << "Error: Invalid debit card number." << endl;
        return;
    }
    if (card.balance < amount) {
        cout << "Error: Insufficient balance." << endl;
        return;
    }
    card.balance -= amount;
    cout << "Purchase successful. Remaining balance: " << card.balance << endl;
}

int main() {
    DebitCard card;
    cout << "Enter debit card number: ";
    cin >> card.number;
    cout << "Enter debit card balance: ";
    cin >> card.balance;
    double amount;
    cout << "Enter purchase amount: ";
    cin >> amount;

    makePurchase(card, amount);

    return 0;
}
