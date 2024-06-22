#include <iostream>
#include <cmath>

using namespace std;

bool isArmstrong(int number) {
    int sum = 0, temp = number;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, 3);
        temp /= 10;
    }
    return sum == number;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << number << (isArmstrong(number) ? " is an Armstrong number." : " is not an Armstrong number.") << endl;

    return 0;
}