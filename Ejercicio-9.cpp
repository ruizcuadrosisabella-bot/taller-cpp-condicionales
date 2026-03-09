#include <iostream>

int main() {
    int year;
    bool isDivisibleBy4;
    bool isDivisibleBy100;
    bool isDivisibleBy400;
    bool isLeapYear;

    std::cout << "Enter a year: ";
    std::cin >> year;

    isDivisibleBy4 = (year % 4 == 0);
    isDivisibleBy100 = (year % 100 == 0);
    isDivisibleBy400 = (year % 400 == 0);

    std::cout << "\nReasoning:\n";
    std::cout << "Divisible by 4: " << isDivisibleBy4 << "\n";
    std::cout << "Divisible by 100: " << isDivisibleBy100 << "\n";
    std::cout << "Divisible by 400: " << isDivisibleBy400 << "\n";

    // A year is a leap year if it's divisible by 4 AND not by 100, 
    // OR if it's divisible by 400.
    isLeapYear = (isDivisibleBy4 && !isDivisibleBy100) || isDivisibleBy400;

    std::cout << "\nConclusion:\n";
    if (isLeapYear) {
        std::cout << "The year " << year << " IS a leap year." << "\n";
    } else {
        std::cout << "The year " << year << " is NOT a leap year." << "\n";
    }

    return 0;
}
