#include <iostream>
#include <algorithm>
#include <sstream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int num = 0;
    for (int i = 0; i < n; i++) {
        string op;
        cin >> op;
        if (op == "++X" || op == "X++") {
            num++;
        } else {
            num--;
        }
    }

    cout << num << endl;
    return 0;
}