#include <iostream>

int main() {
    int a, b;

    std::cout << "Enter the value of a: ";
    std::cin >> a;
    std::cout << "Enter the value of b: ";
    std::cin >> b;

    
    {
        std::cout << "\nMethod (a): Temporary variable\n";
        int x = a;
        int y = b;

        std::cout << "Before: x = " << x << ", y = " << y << "\n";

        int temp = x;
        x = y;
        y = temp;

        std::cout << "After: x = " << x << ", y = " << y << "\n";
    }

    
    {
        std::cout << "\nMethod (b): Arithmetic operations\n";
        int x = a;
        int y = b;

        std::cout << "Before: x = " << x << ", y = " << y << "\n";

        x += y;   // x = x + y
        std::cout << "Step 1 (x += y): x = " << x << ", y = " << y << "\n";

        y = x - y;
        std::cout << "Step 2 (y = x - y): x = " << x << ", y = " << y << "\n";

        x -= y;
        std::cout << "Step 3 (x -= y): x = " << x << ", y = " << y << "\n";
    }

    
    {
        std::cout << "\nMethod (c): XOR Bitwise operation\n";
        int x = a;
        int y = b;

        std::cout << "Before: x = " << x << ", y = " << y << "\n";

        x ^= y;
        std::cout << "Step 1 (x ^= y): x = " << x << ", y = " << y << "\n";

        y ^= x;
        std::cout << "Step 2 (y ^= x): x = " << x << ", y = " << y << "\n";

        x ^= y;
        std::cout << "Step 3 (x ^= y): x = " << x << ", y = " << y << "\n";
    }

    return 0;
}
