#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
//void func() {

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    sort(v.begin(), v.end());
    
    int maxCount = 0;
    for (int i = 0; i < n;) {
        int num = v[i++];
        int count = 1;
        while (i < n && num == v[i]) {
            count++;
            i++;
            if (i >= n) {
                break;
            }
        }
        if (count > maxCount) {
            maxCount = count;
        }
    }
    
    string ans = (maxCount <= int((n+1)/2)) ? "YES" : "NO";
    cout << ans << endl;

    return 0;
}
