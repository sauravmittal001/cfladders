#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
#include <sstream>

using namespace std;

int main() {
//void func() {

    int n, m;
    cin >> n >> m;
    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
            if((i == 0 || i == n-1 || j == 0 || j == m-1) && matrix[i][j] == 1) {
//                cout << "(" << i << ", " << j << ")" << endl;
                cout << 2 << endl;
                return 0;
            }
        }
    }
    cout << 4 << endl;

    return 0;
}