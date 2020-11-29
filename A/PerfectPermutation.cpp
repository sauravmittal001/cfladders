#include <iostream>
#include <algorithm>

using namespace std;

void printNums(int n) {
    for (int i = 1; i <= n/2-1;i++) {
        cout << 2*i << " " << 2*i-1 << " ";
    }
    cout << n << " " << n - 1 << endl;
}


int main() {
    int n;
    cin >> n ;

    if (n % 2 == 1) {
        cout << -1 << endl;
    } else {
        printNums(n);
    }
    return 0;
}