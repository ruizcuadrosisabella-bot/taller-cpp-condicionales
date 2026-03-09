#include <iostream>
#include <iomanip>

int main() {
    float weight; 
    float height; 
    double bmi; 

    std::cout << "Enter weight (kg): ";
    std::cin >> weight;

    std::cout << "Enter height (m): ";
    std::cin >> height;

    // Validation for positive values
    if (weight <= 0 || height <= 0) {
        std::cout << "Error: weight and height must be positive values." << "\n";
        return 0;
    }

    // BMI Formula: weight / height^2
    bmi = weight / (height * height);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nBMI: " << bmi << "\n";

    // Classification and recommendations
    if (bmi < 18.5) {
        std::cout << "Classification: Underweight\n";
        std::cout << "Suggested Action: Improve nutrition and consult a professional.\n";
    }
    else if (bmi < 25.0) {
        std::cout << "Classification: Normal weight\n";
        std::cout << "Suggested Action: Maintain healthy habits.\n";
    }
    else if (bmi < 30.0) {
        std::cout << "Classification: Overweight\n";
        std::cout << "Suggested Action: Increase physical activity and adjust diet.\n";
    }
    else if (bmi < 35.0) {
        std::cout << "Classification: Obesity Class I\n";
        std::cout << "Suggested Action: Nutritional plan and supervised exercise.\n";
    }
    else {
        std::cout << "Classification: Obesity Class II\n";
        std::cout << "Suggested Action: Consult a healthcare specialist.\n";
    }

    return 0;
}
