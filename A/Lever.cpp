#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <sstream>

using namespace std;

int main() {
//void func() {

    string str;
    cin >> str;

    int size = (int) str.size();
    int weights[size];
    int levInd;
    for (int i = 0; i < size; i++) {
        if (str[i] == '^') {
            levInd = i;
            weights[i] = -1;
        } else {
            if (str[i] != '=') {
                int w = str[i] - '0';
                weights[i] = w;
            } else {
                weights[i] = 0;
            }
        }
    }
    long long int left = 0, right = 0;
    for (int i = 0; i < levInd; i++) {
        left += weights[i]*(levInd-i);
    }

    for (int i = levInd+1; i < size; i++) {
        right += weights[i]*(i-levInd);
    }

    if (left > right) {
        cout << "left" << endl;
    } else if(right>left) {
        cout << "right" << endl;
    } else {
        cout << "balance" << endl;
    }
    return 0;
}