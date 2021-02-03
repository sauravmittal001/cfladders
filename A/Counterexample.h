#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

long gcd(long a, long b)
{
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    
    // base case
    if (a == b)
        return a;
    
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main() {
//void func() {

    ll l, r;
    cin >> l >> r;
    
    if (r-l >= 2) {
            if (r-l == 2) {
                if (l%2 == 0) {
                    cout << l << " " << l+1 << " " << l+2 << endl;
                } else {
                    cout << -1 << endl;
                }
                
            } else {
                if (l%2 == 1) {
                    cout << l+1 << " " << l+2 << " " << l+3 << endl;
                } else {
                    cout << l << " " << l+1 << " " << l+2 << endl;
                }
            }
            
    } else {
        cout << -1 << endl;
    }

    return 0;
}
