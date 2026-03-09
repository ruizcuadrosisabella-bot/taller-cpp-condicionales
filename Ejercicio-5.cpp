#include <iostream>

// Bitwise permission flags
const int READ = 0b001;    // 1
const int WRITE = 0b010;   // 2
const int EXECUTE = 0b100; // 4

int main() {
    int permissions;

    std::cout << "Enter the integer value for permissions (0 to 7): ";
    std::cin >> permissions;

    std::cout << "\nGranted permissions:\n";

    // Checking individual bits using the AND (&) operator
    if (permissions & READ) {
        std::cout << "- Read\n";
    }
    if (permissions & WRITE) {
        std::cout << "- Write\n";
    }
    if (permissions & EXECUTE) {
        std::cout << "- Execute\n";
    }

    // Checking if no bits are set
    if (!(permissions & (READ | WRITE | EXECUTE))) {
        std::cout << "- None\n";
    }

    int deniedPermissions = ~permissions;
    std::cout << "\nValue with inverted permissions (~): " << deniedPermissions << "\n";

    return 0;
}
