#include <iostream>

using namespace std;

int main() {

    int cents{};
    int dollers{};
    int quarters{};
    int dimes{};
    int nickels{};
    int pennies{};
    int balance{};

    cout <<"Enter an amount in cents: ";
    cin >> cents;

    cout << "You can provoid the change as follows: ";

    dollers = cents / 100;
    balance = cents - (dollers * 100);

    quarters = balance / 25;
    balance -= quarters * 25;

    dimes = balance / 10;
    balance -= dimes * 10;

    nickels = balance / 5;
    balance -= nickels * 5;

    pennies = balance;

    cout << "\ndollers: " << dollers << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;

    // Here we can use the modular symbol insted of subtracting for the balance

    return 0;

}