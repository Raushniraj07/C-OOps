#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    char pattern[3][4] = {
        {'R', ' ', ' ', ' '},
        {'A', 'U', ' ', ' '},
        {'S', 'H', 'N', 'I'}
    };

    int rows = 3; 
    int cols = 4; 

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (pattern[i][j] != ' ') {
                cout << pattern[i][j] << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}
