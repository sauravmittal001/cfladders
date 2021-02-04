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
    
    int n, m;
    cin >> n >> m;
    vector<int> a, b;
    a.assign(n, 0);
    b.assign(m, 0);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    sort(a.rbegin(), a.rend());
    sort(b.begin(), b.end());
    
    int c = max(a[0], a[a.size()-1]*2);
    
    if (c >= b[0]) {
        cout << -1 << endl;
    } else {
        cout << c << endl;
    }
    
    return 0;
}
