#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n ;
    int chest = 0, biceps = 0, back = 0;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (i%3==0) {
            chest += num;
        } else if (i%3==1) {
            biceps += num;
        } else {
            back += num;
        }
    }
    if (chest > biceps && chest > back) {
        cout << "chest" << endl;
    } else if (biceps > chest && biceps > back) {
        cout << "biceps" << endl;
    } else {
        cout << "back" << endl;
    }

    return 0;
}