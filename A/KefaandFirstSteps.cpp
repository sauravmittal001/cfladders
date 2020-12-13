#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <sstream>

using namespace std;

int main() {
//void func() {

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; cin >> arr[i++]);

    int maxLength = 1;

    for (int i = 0; i < n-1; i++) {
        int subSegLen = 1;
        while (i != n-1 && arr[i + 1] >= arr[i]) {
            i++;
            subSegLen++;
        }
        maxLength = max(maxLength, subSegLen);
    }
    cout << maxLength << endl;

    return 0;
}