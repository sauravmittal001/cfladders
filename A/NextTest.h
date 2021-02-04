#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

int main() {
//void func() {
    vector<bool> v; v.assign(3001, false); v[0] = true;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        v[t] = true;
    }
    int c = 0;
    while (v[c++]);
    cout << c-1 << endl;
    return 0;
}
