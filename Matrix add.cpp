#include<iostream>
using namespace std;

int main() {
    int M1[10][10], M2[10][10], Res[10][10];
    int R, C, i, j;

    cout << "Enter size of Matrix (rows and columns): ";
    cin >> R >> C;

    cout << endl << "Enter the elements of the 1st matrix:" << endl;
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            cin >> M1[i][j];
        }
    }

    cout << endl << "Enter the elements of the 2nd matrix:" << endl;
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            cin >> M2[i][j];
        }
    }

    cout << endl << "Sum of the two matrices is:" << endl;
    for (i = 0; i < R; i++) {
        for (j = 0; j < C; j++) {
            Res[i][j] = M1[i][j] + M2[i][j];
            cout << Res[i][j] << " ";  // Added space for better readability
        }
        cout << endl;
    }

    return 0;
}
