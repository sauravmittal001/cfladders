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

    int arr[m];
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }
    int size = (int) (sizeof(arr)/sizeof(arr[0]));
    sort(arr, arr + size);

    int minDiff = INT32_MAX;
    for (int i = 0; i <= m-n; i++) {
        minDiff = min(arr[i+n-1]-arr[i], minDiff);
    }
    cout << minDiff << endl;
    return 0;
}