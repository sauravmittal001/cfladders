#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int numRows, numCols;
    cin >> numRows >> numCols;
    char matrix[numRows][numCols];
    for (int r = 0; r < numRows; r++) {
        string rowStr;
        cin >> rowStr;
        for (int c = 0; c < numCols; c++) {
            matrix[r][c] = rowStr[c];
        }
    }

    int rowsNoEvil = 0;
    for (int r = 0; r < numRows; r++) {
        bool b = true;
        for (int c = 0; c < numCols; c++) {
            if (matrix[r][c] == 'S') {
                b = false;
                break;
            }
        }
        if (b) {
            rowsNoEvil++;
        }
    }

    int colsNoEvil = 0;
    for (int c = 0; c < numCols; c++) {
        bool b = true;
        for (int r = 0; r < numRows; r++) {
            if (matrix[r][c] == 'S') {
                b = false;
                break;
            }
        }
        if (b) {
            colsNoEvil++;
        }

    }
    cout << numCols*rowsNoEvil + numRows*colsNoEvil - colsNoEvil*rowsNoEvil << endl;
    return 0;
}