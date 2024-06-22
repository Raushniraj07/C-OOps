#include <iostream>
using namespace std;
int main() {
    int num, reversedNum = 0;
    cout << "Enter a 5-digit number: ";
    cin >> num;

    if (num < 10000 || num > 99999) {
        cout << "Invalid input. Please enter a 5-digit number." << endl;
        return 1; // Exit with error
    }
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    cout << "Reversed number: " << reversedNum << endl;
    return 0;
}
