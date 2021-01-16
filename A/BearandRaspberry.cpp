#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
#include <sstream>

using namespace std;

int main() {
//void func() {

    int n, c, diff = 0, prev;
    cin >> n >> c >> prev;
    for (int i = 1; i < n; i++) { // one input number already read
        int num;
        cin >> num;
        diff = max(prev-num-c, diff);
        prev = num;
    }
    cout << diff << endl;

    return 0;
}