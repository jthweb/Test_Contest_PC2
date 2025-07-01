#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    double m = std::ceil(n / 4.0);  // Use ceil to round up
    std::cout << std::fixed << std::setprecision(1) << m << std::endl;
    return 0;
}