#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string numStr;
    cin >> numStr;

    int digitArr[numStr.size()];
    for (int i = numStr.size(); i > 0; i--) {
        int digit = numStr[i-1] - '0';
        digitArr[i-1] = digit;
    }

    for (int i = numStr.size(); i > 0; i--) {
        string pattern;
        int digit = digitArr[i-1];
        if (digit >= 5) {
            pattern.append("-O|");
        } else {
            pattern.append("O-|");
        }
        if (digit % 5 == 0) {
            pattern.append("-OOOO");
        } else if (digit % 5 == 1) {
            pattern.append("O-OOO");
        } else if (digit % 5 == 2) {
            pattern.append("OO-OO");
        } else if (digit % 5 == 3) {
            pattern.append("OOO-O");
        } else if (digit % 5 == 4) {
            pattern.append("OOOO-");
        }
        cout << pattern << endl;
    }
    return 0;
}