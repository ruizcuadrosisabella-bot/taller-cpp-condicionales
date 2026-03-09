#include <iostream>
#include <cmath> 

int main() {
    double side1, side2, side3;

    std::cout << "Enter the first side: ";
    std::cin >> side1;
    std::cout << "Enter the second side: ";
    std::cin >> side2;
    std::cout << "Enter the third side: ";
    std::cin >> side3;

    // Check for Triangle Inequality Theorem
    if (side1 > 0 && side2 > 0 && side3 > 0 &&
        side1 + side2 > side3 &&
        side1 + side3 > side2 &&
        side2 + side3 > side1) {

        std::cout << "The triangle is valid." << "\n";

        // Classification by sides
        if (side1 == side2 && side2 == side3) {
            std::cout << "Type by sides: Equilateral" << "\n";
        } 
        else if (side1 == side2 || side1 == side3 || side2 == side3) {
            std::cout << "Type by sides: Isosceles" << "\n";
        } 
        else {
            std::cout << "Type by sides: Scalene" << "\n";
        }
    } 
    else {
        std::cout << "The triangle is not valid." << "\n";
    }

    return 0;
}
