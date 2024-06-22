#include <iostream>
using namespace std;

int multiply(int a, int b) {
    int result = 0;
    bool isNegative = false;
    
    if (a < 0 && b > 0) {
        a = -a;
        isNegative = true;
    } else if (a > 0 && b < 0) {
        b = -b;
        isNegative = true;
    } else if (a < 0 && b < 0) {
        a = -a;
        b = -b;
    }
    
    for (int i = 0; i < b; ++i) {
        result += a;
    }
    if (isNegative) {
        result = -result;
    }
    return result;
}
int main() {
    int num1, num2;
    cout << "Enter two numbers to multiply: ";
    cin >> num1 >> num2;

    cout << "Multiplication: " << multiply(num1, num2) << endl;
    return 0;
}
