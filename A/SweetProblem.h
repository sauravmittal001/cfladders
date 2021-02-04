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
    
    int t;
    cin >> t;
    while(t--) {
        vector<int> v; v.assign(3, -1);
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());
        if(v[2] > v[0] + v[1]) {
            cout << v[0] + v[1] << endl;
        } else {
            cout << (v[0] + v[1] + v[2])/2 << endl;
        }
    }
    
    return 0;
}
