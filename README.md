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

    int cents{};
    int dollers{};
    int quarters{};
    int dimes{};
    int nickels{};
    int pennies{};
    int balance{};

    cout <<"Enter an amount in cents: ";
    cin >> cents;

    cout << "You can provide the change as follows: ";

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

    // Here we can use the modular symbol instead of subtracting for the balance

    return 0;

}
