#include <iostream>
#include <map>

using namespace std;

int findMinTime(int n, const int arr[]) {
    int indMin, indMax, min = INT16_MAX, max = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            indMax = i;
        }
        if (arr[i] <= min) {
            min = arr[i];
            indMin = i;
        }
    }
    int ans = (indMax) + (n - 1 - indMin);
    if (indMax > indMin) {
        ans -= 1;
    }
//    cout << indMin << " " << indMax << endl;
    return ans;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << findMinTime(n, arr) << endl;
    return 0;
}