#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double centimeters;
    cout << "Enter length in centimeters: ";
    cin >> centimeters;
    double inches = centimeters / 2.54;

    int feet = inches / 12;
    double remaining_inches = inches - feet * 12;

    cout << fixed << setprecision(1);
    cout << centimeters << " centimeters is " << feet << " feet " << remaining_inches << " inches" << endl;
    return 0;
}
