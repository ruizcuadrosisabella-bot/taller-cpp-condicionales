#include <iostream>

int main() {
    double balance = 1000.0; // initial balance
    double amount;
    int option;
    int transactions = 0;
    bool exit = false;

    do {
        std::cout << "\n===== ATM MACHINE =====\n";
        std::cout << "1. Deposit\n";
        std::cout << "2. Withdraw\n";
        std::cout << "3. Check Balance\n";
        std::cout << "4. Exit\n";
        std::cout << "Select an option: ";
        std::cin >> option;

        switch (option) {
            case 1: // Deposit
                std::cout << "Enter amount to deposit: ";
                std::cin >> amount;

                if (amount > 0) {
                    balance += amount; // accumulator
                    transactions++;    // counter
                    std::cout << "Successful deposit.\n";
                } else {
                    std::cout << "Invalid amount.\n";
                }
                break;

            case 2: // Withdraw
                std::cout << "Enter amount to withdraw: ";
                std::cin >> amount;

                if (amount > 0 && amount <= balance) {
                    balance -= amount; // accumulator
                    transactions++;    // counter
                    std::cout << "Successful withdrawal.\n";
                } else {
                    std::cout << "Error: Insufficient balance or invalid amount.\n";
                }
                break;

            case 3: // Check balance
                std::cout << "Current balance: $" << balance << "\n";
                transactions++; // counts the inquiry
                break;

            case 4: // Exit
                exit = true;
                break;

            default:
                std::cout << "Invalid option.\n";
        }

    } while (!exit);

    std::cout << "\nTotal number of transactions: " << transactions << "\n";
    std::cout << "Thank you for using the ATM.\n";

    return 0;
}
