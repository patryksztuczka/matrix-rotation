#include <iostream>

using namespace std;

const int MATRIX_SIZE = 2;

void printMatrix(int m[MATRIX_SIZE][MATRIX_SIZE]){
    cout << "========== Orginal matrix =========" << endl;
    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            cout << m[i][j] << "   ";
        }
        cout << endl;
    }
}


int main() {
    int m[MATRIX_SIZE][MATRIX_SIZE];

    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            cout << "Enter an element of matrix [" << i << "," << j << "]: " << endl;
            cin >> m[i][j];
        }
    }

    printMatrix(m);


    return 0;
}
