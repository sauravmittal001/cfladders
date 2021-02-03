#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int r1, c1, r2, c2;

int rook() {
    if (r1 == r2 && c1 == c2) {
        return 0;
    } else if (r1 == r2 || c1 == c2) {
        return 1;
    } else {
        return 2;
    }
}

int bishop() {
    
    int rem1 = abs(r1-c1)%2;
    int rem2 = abs(r2-c2)%2;
    if (rem1 != rem2) {
        return 0;
    } else {
        if (abs(r1-r2) == abs(c1-c2)) {
            return 1;
        } else {
            return 2;
        }
    }
}

int king() {
    return max(abs(r1-r2), abs(c1 - c2));
}

int main() {
//void func() {
    cin >> r1 >> c1 >> r2 >> c2;
    
    cout << rook() << " " << bishop() << " " << king() << endl;
    
    return 0;
}
