#include <iostream>
#include <algorithm>
#include <sstream>
#include <cmath>

using namespace std;

int main() {
    int row, col;
    for (int i = 1; i <=5; i++) {
        for (int j = 1; j <=5; j++) {
            int num;
            cin >> num;
            if (num == 1) {
                row = i;
                col = j;
            }
        }
    }
    cout << abs(3-row) + abs(3-col) << endl;
    return 0;
}