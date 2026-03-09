#include <iostream>
#include <iomanip>

int main()
{
    double celsius;
    double fahrenheit;
    double kelvin;
    double rankine;
    
    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> celsius;
    
    // Conversion formulas
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    kelvin = celsius + 273.15;
    rankine = (celsius + 273.15) * 9.0 / 5.0;
    
    // Output formatting
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Fahrenheit: " << fahrenheit << "\n";
    std::cout << "Kelvin: " << kelvin << "\n";
    std::cout << "Rankine: " << rankine << "\n";

    return 0;
}
