# US-Currency-Change-Calculator

This C++ program efficiently calculates change for a given number of cents. It uses a greedy algorithm to determine the optimal number of dollars, quarters, dimes, nickels, and pennies. By prioritizing the largest denominations, the program ensures the change is provided with the fewest possible coins.

## How to Compile and Run

This program can be compiled using g++. To run it, follow these steps in your terminal:

1.  **Compile the code:**
    ```bash
    g++ -o change_calculator main.cpp
    ```
    This command compiles `main.cpp` and creates an executable file named `change_calculator`.

2.  **Run the program:**
    ```bash
    ./change_calculator
    ```
    The program will then prompt you to enter an amount in cents.

## Features

* Calculates the minimum number of coins for a given amount of cents.
* Uses a greedy algorithm to determine the change.
* Provides change in common US currency denominations: dollars, quarters, dimes, nickels, and pennies.
```cpp
#include <iostream>

using namespace std;

int main() {

    // Declare integer variables for the currency denominations and a temporary balance.
    int cents{};
    int dollars{};
    int quarters{};
    int dimes{};
    int nickels{};
    int pennies{};
    int balance{};

    // Prompt the user to enter a value for cents and read the input.
    cout << "Enter an amount in cents: ";
    cin >> cents;

    cout << "You can provide the change as follows: ";

    // Use a greedy algorithm to calculate the change, starting with the largest denomination.

    // Calculate the number of dollars (100 cents).
    dollars = cents / 100;
    // Update the balance with the remaining cents.
    balance = cents - (dollars * 100);

    // Calculate the number of quarters (25 cents) from the remaining balance.
    quarters = balance / 25;
    // Update the balance.
    balance -= quarters * 25;

    // Calculate the number of dimes (10 cents).
    dimes = balance / 10;
    // Update the balance.
    balance -= dimes * 10;

    // Calculate the number of nickels (5 cents).
    nickels = balance / 5;
    // Update the balance.
    balance -= nickels * 5;

    // The remaining balance is the number of pennies.
    pennies = balance;

    // Display the results to the user.
    cout << "\ndollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;

    // The comment about using the modulo operator is a good suggestion.
    // An alternative approach would be to use the modulo operator (%) to simplify the balance calculation.
    // For example, instead of 'balance = cents - (dollars * 100);', you could use 'balance = cents % 100;'.

    return 0;

}
