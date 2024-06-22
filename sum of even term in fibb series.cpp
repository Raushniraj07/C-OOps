#include<iostream>
using namespace std;
unsigned long long SumevenFibb(int limit){
    unsigned long long sum=0;
    unsigned long long a=2;
    unsigned long long b=8;
    while (a<=limit){
        sum +=a;
        unsigned long long next = 4 * b + a;
        a = b;
        b = next;
    }
    return sum;
}
int main() {
    int limit;
    cout << "Enter the limit for Fibonacci series: ";
    cin >> limit;
    unsigned long long result = SumevenFibb(limit);
    cout << "Sum of even Fibonacci terms up to " << limit << " is: " << result << endl;
    return 0;
}