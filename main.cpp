#include <iostream>

using namespace std;

const int MATRIX_SIZE = 2;

void printMatrix(int m[MATRIX_SIZE][MATRIX_SIZE]){
    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            cout << m[i][j] << "   ";
        }
        cout << endl;
    }
    cout << "==============================" << endl;
}

void swap(int &i, int &j){
    int temp = i;
    i = j;
    j = temp;
}


int main() {
    int m[MATRIX_SIZE][MATRIX_SIZE];
    int last = MATRIX_SIZE - 1;

    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            cout << "Enter an element of matrix [" << i << "," << j << "]: " << endl;
            cin >> m[i][j];
        }
    }

    cout << "========== Orginal matrix =========" << endl;
    printMatrix(m);

    for (int i = 0; i < last; i++) {
        swap(m[i][i], m[i][last]);
        swap(m[i][i], m[last][last]);
        swap(m[i][i], m[last][i]);
    }

    printMatrix(m);


    return 0;
}
