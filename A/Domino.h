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
    
    int n;
    cin >> n;
    
    vector<int> a, b;
    a.assign(n, 0);
    b.assign(n, 0);
    
    int a_sum = 0, b_sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        a_sum += a[i];
        b_sum += b[i];
    }
    int eo = 0, oe = 0;
    for (int i = 0; i < n; i++) {
        if (a[i]%2 == 0 && b[i]%2 == 1)
            eo++;
        else if (a[i]%2 == 1 && b[i]%2 == 0)
            oe++;
    }
    
    if (a_sum%2 == 0 && b_sum%2 == 0) {
        cout << 0 << endl;
    } else if (a_sum%2 == 1 && b_sum%2 == 1 && eo+oe > 0) {
        cout << 1 << endl;
    } else {
        cout << -1 << endl;
    }
    
    return 0;
}
