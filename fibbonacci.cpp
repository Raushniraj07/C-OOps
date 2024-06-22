#include <iostream>
using namespace std;

int fibonacci(int i) {
    if (i == 2)
        return 2;
    else if (i == 1)
        return 1;
    else return fibonacci(i - 1) + fibonacci(i - 2);
}

int main() {

    int currentTerm, sum = 0;
    for (int i = 1; i <= 20; i++) {

        currentTerm = fibonacci(i);
        if (currentTerm % 2 == 0)
            sum += currentTerm;
    }
    cout << sum;
    return 0;
}