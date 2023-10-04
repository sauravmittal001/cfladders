/*
 Vector initialisation in c++
 */

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void print_vector_int(string name, vector<int>& v) {
    cout << "Printing vector " << name << ": ";
    for (auto x : v)
        cout << x << " ";
    cout << "\n";
}

int main() {
    /*
     Vector initialisation in c++
     sources:
     1. https://www.geeksforgeeks.org/initialize-a-vector-in-cpp-different-ways/
     2.
     */
    
    int n, val;
    
    // 1. push_back new elements
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    print_vector_int("v1", v1);
    
    // 2. size n, with default value
    n = 10;
    val = -1;
    vector<int> v2(n, val); // v2(n) uses system's default value
    print_vector_int("v2", v2);
    
    // 3. initialise with all elements
    vector<int> v3 { 10, 20, 30 };
    print_vector_int("v3", v3);
    
    // 4. parse array into vector
    int arr[] = { 10, 20, 30 };
    n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v4(arr, arr + n);
    print_vector_int("v4", v4);
    
    // 5. sub-vector from given vector
    vector<int> foo{ 10, 20, 30, 40, 50, 60 };
    vector<int> v5(foo.begin() + 2, foo.begin() + 4);
    print_vector_int("v5", v5); // Output: { 30, 40 }
    
    // 6. initialise all elements with particular value
    n = 10, val = 5;
    vector<int> v6(n);
    fill(v6.begin(), v6.end(), val);
    print_vector_int("v6", v6);
    
    // 7. Initialize an array with consecutive numbers using std::iota
    int size = 5, starting_value = 2;
    vector<int> vec(size);
    iota(vec.begin(), vec.end(), starting_value); // #include <numeric>
    print_vector_int("v5", v5); // Output: { 2, 3, 4, 5, 6 }
    
    return 0;
}
