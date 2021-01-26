#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
//void func() {

    int k, d;
    cin >> k >> d;
    
    string ans = "";
    if (k > 1 && d == 0) {
        cout << "No solution" << endl;
        return 0;
    }
    for(int i = 0; i < k-1; i++) {
        ans = ans.append("9");
    }
    ans.append(to_string(d));
    cout << ans << endl;
    return 0;
}
