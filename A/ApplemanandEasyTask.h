#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <vector>

using namespace std;

int size;

bool isValidMove(int i, int j, int row, int col) {
    bool isValid = true;
    if (i == row && j == col) {
        isValid = false;
    } else if (i < 0 || j < 0 || i >= size || j >= size) {
        isValid = false;
    }
    return isValid;
}

bool checkMatrixAt(int row, int col, vector<vector<char> > matrix) {
    int count = 0;
//    for (int i = row-1; i <= 1; i++) {
//        for (int j = col-1; j <= 1; j++)
//            if (isValidMove(i, j, row, col) && matrix.at(i).at(j) == 'o') count++;
//    }
    int ii = row-1;
    if (isValidMove(ii, col, row, col) && matrix.at(ii).at(col) == 'o') count++;
    ii = row+1;
    if (isValidMove(ii, col, row, col) && matrix.at(ii).at(col) == 'o') count++;
    int jj = col-1;
    if (isValidMove(row, jj, row, col) && matrix.at(row).at(jj) == 'o') count++;
    jj = col+1;
    if (isValidMove(row, jj, row, col) && matrix.at(row).at(jj) == 'o') count++;
//    if (count % 2 != 0) {
//        cout << row << " " << col << " " << count << endl;
//    }
    return (count % 2 != 0);
}

int main() {
//void func() {

    cin >> size;
    vector<vector<char> > matrix;
    for (int i = 0; i < size; i++) {
        vector<char> v;
        for (int j = 0; j < size; j++) {
            char xo;
            cin >> xo;
            v.push_back(xo);
        }
        matrix.push_back(v);
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (checkMatrixAt(i, j, matrix)) {
                cout << "NO" << endl;
//                return;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
//
    return 0;
}


