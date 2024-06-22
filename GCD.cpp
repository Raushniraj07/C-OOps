#include <iostream>
using namespace std;

int gcd(int x, int y) {
    if (y == 0)
        return x;
    return gcd(y, x % y);
}
int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    int result = gcd(x, y);
    cout << "GCD of " << x << " and " << y << " is " << result << endl;
    return 0;
}
