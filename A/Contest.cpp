#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <vector>

using namespace std;


int main() {
//void func() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        set<int> s;
        for (int i = 0 ; i < n; i++)
            for (int j = 0; j < n; j++)
                if (i != j) s.insert(abs(arr[j] - arr[i]));
        cout << ((s.find(0) != s.end()) ? s.size()-1 : s.size()) << endl;
    }
    return 0;
}