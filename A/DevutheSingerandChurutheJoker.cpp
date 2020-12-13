#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <sstream>

using namespace std;

int main() {
//void func() {

    int n, d;
    cin >> n >> d;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        sum += num;
    }
    sum+=(n-1)*10;
    int ans = (d-sum)/5;

    if (d<sum) {
        cout << -1 << endl;
    } else {
        cout << 2*(n-1) + ans << endl;
    }

    return 0;
}