// Nikhil 
// 23070123090
// Experiment 8

#include <iostream>
using namespace std;

int main() {
    int rows, cols, i, j;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[rows][cols];

    cout << "Enter elements of matrix:" << endl;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cout << "Enter element [" << i + 1 << "," << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }

    cout << "Entered Matrix:" << endl;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
            if (j == cols - 1)
                cout << endl;
        }
    }

    return 0;
}