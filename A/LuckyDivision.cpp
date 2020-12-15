#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
#include <sstream>

using namespace std;

int divide(int m, int n) {

    while (n%m == 0) {
        n /= m;
    }
    return n;
}

int main() {
//void func() {

    int arr[] = {4, 44, 444, 7, 77, 777, 47, 74, 447, 474, 744, 477, 747, 774};
    int n0 = sizeof(arr) / sizeof(arr[0]);

    /*Here we take two parameters, the beginning of the
    array and the length n upto which we want the array to
    be sorted*/
    sort(arr, arr + n0, greater<>());

    int n;
    cin >> n;
    bool flag = false;
    for (int i = 0; i < 14; i++) {
        if (n%arr[i] == 0) {
            flag = true;
        }
    }
    cout << (flag ? "YES" : "NO") << endl;
    return 0;
}