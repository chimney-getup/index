// main.cpp
#include <iostream>
#include "average.h"

int main() {
    double num1, num2, num3;

    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    double result = calculateAverage(num1, num2, num3);

    std::cout << "The average of the three numbers is: " << result << std::endl;

    return 0;
}
