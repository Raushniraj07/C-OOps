#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2, num3, num4;
    cout << "Enter four numbers: ";
    cin >> num1 >> num2 >> num3 >> num4;

    // Multiplication
    double multiplication = num1 * num2 * num3 * num4;
    cout << "Multiplication: " << multiplication << endl;

    // Geometric mean
    double geometric_mean = pow(num1 * num2 * num3 * num4, 0.25);
    cout << "Geometric Mean: " << geometric_mean << 