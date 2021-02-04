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
//    ifstream cin("input.txt");
//    ofstream cout("output.txt");
    
    int n, m;
    cin >> n >> m;
    
    vector<string> v; v.assign(n, "");
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    vector<string> ans; ans.assign(n, "");
    for (int i = 0; i < n; i++) {
        string s;
        if (i%2 == 0) {
            for (int j = 0; j < m; j++) {
                char c = (j % 2 == 0 ? 'B' : 'W');
                if (v[i][j] == '-') {
                    c = '-';
                }
                s += c;
            }
        } else {
            for (int j = 0; j < m; j++) {
                char c = (j % 2 == 0 ? 'W' : 'B');
                if (v[i][j] == '-') {
                    c = '-';
                }
                s += c;
            }
        }
        ans[i] = s;
        cout << s << endl;
    }
    
    
    
    return 0;
}
