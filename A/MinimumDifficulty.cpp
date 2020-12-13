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

    int arr[n-1];
    int lowStep, difficulty = -1;
    cin >> lowStep;
    for (int i = 0; i < n-1; i++) {
        int highStep;
        cin >> highStep;
        arr[i] = highStep-lowStep;
        difficulty = max(difficulty, arr[i]);
        lowStep = highStep;
    }
    int minHeight = INT16_MAX;

    for (int i = 0; i < n-2; i++) {
        minHeight = min(minHeight, arr[i] + arr[i+1]);
    }
    cout << max(minHeight, difficulty) << endl;
    return 0;
}