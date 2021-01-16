#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
#include <sstream>

using namespace std;

//bool isCross(int i, int j, int n) {
//    int x = i, y = j;
//    char c = matrix[x++][y++];
//
//    int length = 1;
//    while (x < n && y < n && c == matrix[x++][y++]) {
//        length++;
//    }
//    if (length > 1) {
//        if (length % 2 == 0) {
//            if (matrix[length/2+i-1][length/2+j] == c && matrix[length/2+i][length/2+j-1] == c) {
//                cout << i << " " << j << " " << length << endl;
//                cout << c << " (" << length/2+i-1 << "," << length/2+j << ") (" << length/2+i << "," << length/2+j-1 << ")" <<  endl;
//                return true;
//            }
//        } else {
//            length--;
//            if (matrix[length/2+i-1][length/2+j+1] == c && matrix[length/2+i+1][length/2+j-1] == c) {
//                cout << i << " " << j << " " << length+1 << endl;
//                cout << c << " (" << length/2+i-1 << "," << length/2+j+1 << ") (" << length/2+i+1 << "," << length/2+j-1 << ")" <<  endl;
//                return true;
//            }
//        }
//    }
//    return false;
//}

int main() {
//void func() {

    int n;
    cin >> n;
    char matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    char c = matrix[0][0];
    char d = matrix[1][0];
    if (c == d) {
        cout << "NO" << endl;
//        return;
        return 0;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i-j==0 || i+j == n-1) {
                if (c != matrix[i][j]) {
                    cout << "NO" << endl;
//                    return;
                    return 0;
                }
            } else {
                if (d != matrix[i][j]) {
                    cout << "NO" << endl;
//                    return;
                    return 0;
                }
            }
        }
    }
        cout << "YES" << endl;

//    for (int i = 0; i < n-1; i++) {
//        for (int j = 0; j < n-1; j++) {
//            if (isCross(i, j, n)) {
//                cout << "YES" << endl;
//                return;
//            }
//        }
//    }

    return 0;
}