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
    
    int y, k, n;
    cin >> y >> k >> n;
    
    int lmbda = y/k + 1;
    
    int x = k*lmbda - y;
    vector<int> h;
    while (x + y <= n && x > 0) {
        h.push_back(x);
        x += k;
    }
    
    
    for (int i = 0; i < h.size(); i++)
        cout << h[i] << " ";
    
    if(h.size() == 0) {
        cout << -1;
    }
    
    cout << endl;
    
    
    
    return 0;
}
