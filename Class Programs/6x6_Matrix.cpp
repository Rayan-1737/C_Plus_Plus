#include <iostream>
using namespace std;

int main() {
    int matrix[6][6];

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            matrix[i][j] = (i + 1) * (j + 1); // Fill the matrix with values
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
