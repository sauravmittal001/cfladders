#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <fstream>
#include <sstream>

using namespace std;

#define ll long long

int main() {
//void func() {
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    
    int n;
    cin >> n;
    string v;
    cin >> v;
    
    for (int i = 1; i <= n/2; i+=1) {
        if (v[i-1] == 'R' && v[i+n/2-1] == 'L') {
            cout << i+n/2 << " " << i << endl;
        } else {
            cout << i << " " << i+n/2 << endl;
        }
    }
    
    return 0;
}
