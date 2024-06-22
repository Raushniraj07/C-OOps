#include <iostream>
#include <cstring> // for strlen
using namespace std;

void reverseString(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; ++i) {
        // Swap characters at positions i and length-i-1
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str[100]; // Assuming the input string length won't exceed 100 characters

    cout << "Enter a string: ";
    cin.getline(str, 100); // Read the string including spaces

    reverseString(str);

    cout << "Reversed string: " << str << endl;

    return 0;
}
