#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <sstream>

using namespace std;

int main() {
//void func() {

    int n, m;
    cin >> n >> m;

    int sum = min(n,m);
    if (sum % 2 == 0) {
        cout << "Malvika" << endl;
    } else {
        cout << "Akshat" << endl;
    }

    return 0;
}