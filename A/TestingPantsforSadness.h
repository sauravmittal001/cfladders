#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <vector>

using namespace std;

int main() {
//void func() {
    int n;
    cin >> n;
    long long int minClicks = 0;
    for (int i = 0; i < n; i++) {
        long long int value;
        cin >> value;
        minClicks += (value-1)*(i+1) + 1;
    }
    cout << minClicks << endl;

    return 0;
}
