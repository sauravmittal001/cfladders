#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>

using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    cout << max(3*n-k, 0) << endl;

    return 0;
}