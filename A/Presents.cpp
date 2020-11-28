#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int get[n];
    int give[n];

    for (int i = 0; i < n; i++) {
        cin >> get[i];
    }

    for (int i = 0; i < n; i++) {
        int getter = get[i];
        int giver = get[getter-1];
        give[giver-1] = getter;
    }

    for (int i = 0; i < n-1; i++) {
        cout << give[i] << " ";
    }
    cout << give[n-1] << endl;
    return 0;
}