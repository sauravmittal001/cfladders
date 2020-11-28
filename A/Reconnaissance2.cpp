#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n+1];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    arr[n] = arr[0];
    int minDiff = INT16_MAX;
    int ind1 = 0, ind2 = 0;
    for (int i = 0; i < n; i++) {
        int heightDiff = abs(arr[i] - arr[i+1]);
        if (heightDiff < minDiff) {
            minDiff = heightDiff;
            ind1 = i + 1;
            ind2 = (i == n-1) ? 1 : i + 2;
        }
    }
    cout << ind1 << " " << ind2 << endl;
    return 0;
}
