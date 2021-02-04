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
    int n;
    cin >> n;
    
    vector<int> v; v.assign(n, 0);
    map<int, int> m;
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        m[v[i]] = i;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (m.find(v[i] + v[j]) != m.end()) {
                cout << m[v[i] + v[j]]+1 << " " << i+1 << " " << j+1 << endl;
//                return;
                return 0;
            }
        }
    }
    cout << -1 << endl;
    
    return 0;
}
