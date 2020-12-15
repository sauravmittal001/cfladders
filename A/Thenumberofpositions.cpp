#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
#include <sstream>

using namespace std;

int main() {
//void func() {

    int n, a, b;
    cin >> n >> a >> b;

    cout << min(n-a, b+1) << endl;

    return 0;
}