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
    vector<int> a; a.assign(n, 0);
    vector<int> b; b.assign(n, 0);
    set<int> s;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s.insert(a[i]);
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        s.insert(b[i]);
    }
    
    int c = 0;
    for (int aa : a) {
        for (int bb : b) {
            int result = aa xor bb;
            if (s.find(result)!=s.end()) {
                c++;
            }
        }
    }
    string ss = ((c%2 == 0) ? "Karen" : "Koyomi");
    cout << ss << endl;
    
    return 0;
}
