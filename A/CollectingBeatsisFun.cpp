#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <sstream>

using namespace std;

int main() {
//void func() {

    int k;
    cin >> k;
    int arr[9];

    for (int i = 0; i < 9; i++) {arr[i] = 0;}


    for (int i = 0; i < 4; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < 4; j++) {
            if (s[j] != '.') {
                int num = s[j] - '0';
                arr[num-1]++;
            }
        }
    }

    int size = int(sizeof(arr)/sizeof(arr[0]));
    sort(arr, arr+size, greater<>());
    if (2*k >= arr[0]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}