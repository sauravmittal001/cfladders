#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>

using namespace std;

#define ll long long

int main() {
//void func() {
//    ifstream cin("input.txt");
//    ofstream cout("output.txt");
    
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    if (x1 == x2) {
        int i = abs(y2-y1);
        cout << i + x1 << " " << y1 << " " << i + x1 << " " << y2 << endl;
    } else if (y1 == y2) {
        int i = abs(x2-x1);
        cout << x1 << " " << y1 + i << " " << x2 << " " << y1 + i << endl;
    } else if (abs(y1-y2) == abs(x1-x2)) {
        cout << x2 << " " << y1 << " " << x1 << " " << y2 << endl;
    } else {
        cout << -1 << endl;
    }
    
    
    
    return 0;
}
