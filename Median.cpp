#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double findMedian(vector<double> &numbers) {
    int size = numbers.size();
    if (size == 0) {
        cout << "No numbers provided." << endl;
        return 0.0;
    }

    // Sort the numbers
    sort(numbers.begin(), numbers.end());

    // Find the median
    if (size % 2 == 0) {
        // If even number of elements, average of middle two
        return (numbers[size / 2 - 1] + numbers[size / 2]) / 2.0;
    } else {
        // If odd number of elements, middle element
        return numbers[size / 2];
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1; // Exit with error
    }

    vector<double> numbers(n);
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    double median = findMedian(numbers);
    cout << "Median: " << median << endl;

    return 0;
}
