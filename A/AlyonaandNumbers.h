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

    map<ll, ll> n, m;
    n = {{0, 0}, {1, 0}, {2, 0}, {3, 0}, {4, 0}};
    m = {{0, 0}, {1, 0}, {2, 0}, {3, 0}, {4, 0}};
    
    ll a,b;
    cin >> a >> b;
    
    for (ll i = 1; i <= a; i++) {
        n[i%5] = n[i%5] + 1;
    }
    for (ll i = 1; i <= b; i++) {
        m[i%5] = m[i%5] + 1;
    }
    cout << n[0]*m[0] + n[1]*m[4] + n[2]*m[3] + n[3]*m[2] + n[4]*m[1] << endl;
    
    return 0;
}
