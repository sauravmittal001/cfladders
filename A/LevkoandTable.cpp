#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    string k;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        string str;
        for (int j = 0; j < n; j++){
            if (i == j) {
                str.append(k);
                str.append(" ");
            } else {
                str.append("0");
                str.append(" ");
            }
        }
        str.erase(str.size()-1);
        cout << str << endl;
    }
    return 0;
}