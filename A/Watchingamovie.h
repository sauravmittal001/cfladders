#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <vector>

using namespace std;

int main() {
//void func() {

    int n, x;
    cin >> n >> x;
    int minMinutes = 0;
    int initial = 1;
    for (int i = 0; i < n;i++) {
        int li, ri;
        cin >> li >> ri;
        minMinutes += ri -li + 1 + (li-initial)%x;
        initial = ri+1;
    }
    cout << minMinutes << endl;

    return 0;
}


