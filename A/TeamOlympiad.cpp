#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;

    int prog[n+1], maths[n+1], pe[n+1];
    int progPoint = 0, mathsPoint = 0,pePoint = 0;
    for (int i = 1; i <= n; i++) {
        int num;
        cin >> num;
        if (num == 1) {
            prog[progPoint++] = i;
        } else if (num == 2) {
            maths[mathsPoint++] = i;
        } else if (num == 3){
            pe[pePoint++] = i;
        }
    }

    int num = min(progPoint, min(mathsPoint, pePoint));
    cout << num << endl;
    for (int i = 0; i < num; i++) {
        cout << prog[i] << " " << maths[i] << " " << pe[i] << endl;
    }

    return 0;
}