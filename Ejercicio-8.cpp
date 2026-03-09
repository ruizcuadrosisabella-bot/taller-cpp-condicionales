#include <iostream>
#include <algorithm> 

int main() {
    double purchaseAmount;
    double totalDiscount = 0.0;

    char customerType; // 'V' = VIP, 'N' = Normal
    char coupon; // 'A', 'B', 'C'
    bool isWeekend;

    std::cout << "Enter the purchase amount: ";
    std::cin >> purchaseAmount;

    std::cout << "Customer type (V = VIP, N = Normal): ";
    std::cin >> customerType;

    std::cout << "Coupon code (A, B, C, N = none): ";
    std::cin >> coupon;

    std::cout << "Is it the weekend? (1 = Yes, 0 = No): ";
    std::cin >> isWeekend;

    // Customer type discount
    if (customerType == 'V' || customerType == 'v') {
        totalDiscount += 0.15; // 15%
    } else {
        totalDiscount += 0.05; // 5%
    }

    // Purchase volume discount
    if (purchaseAmount >= 500) {
        totalDiscount += 0.10;
    } else {
        if (purchaseAmount >= 200) {
            totalDiscount += 0.05;
        }
    }

    // Coupon logic
    switch (coupon) {
        case 'A':
        case 'a':
            totalDiscount += 0.10;
            break;
        case 'B':
        case 'b':
            totalDiscount += 0.07;
            break;
        case 'C':
        case 'c':
            totalDiscount += 0.05;
            break;
        default:
            break; // No coupon
    }
    
    // Weekend bonus discount
    if (isWeekend) {
        totalDiscount += 0.05;
    }

    // Cap the discount at 50%
    totalDiscount = std::min(totalDiscount, 0.50);

    double finalPrice = purchaseAmount * (1 - totalDiscount);

    std::cout << "\nTotal discount applied: " << totalDiscount * 100 << "%\n";
    std::cout << "Final price to pay: $" << finalPrice << "\n";

    return 0;
}
