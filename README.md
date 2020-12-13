

![alt text](https://sta.codeforces.com/s/42034/images/codeforces-telegram-square.png)
# cfladders
<a href="http://cfladders.rf.gd/">Codeforces Problem Solutions </a>
## Table of Contents (Optional)

- [Points](#points)
- [Something1](#Something1)

---

## Points

> <a href="https://www.geeksforgeeks.org/cincout-vs-scanfprintf/">Cin-Cout vs Scanf-Printf </a>

- <a href="https://codeforces.com/contest/302/problem/A">#17 Eugeny and Array</a>: Regular competitive programmers face common challenge when input is large and the task of reading such an input from stdin might prove to be a bottleneck. Such problem is accompanied with “Warning: large I/O data”.
In such cases: (1) use scanf instead of cin, (2) std::ios::sync_with_stdio(false);

> <a href="https://www.geeksforgeeks.org/stdfixed-stdscientific-stdhexfloat-stddefaultfloat-c/">std::fixed, std::scientific, std::hexfloat, std::defaultfloat in C++</a>
- <a href="https://codeforces.com/contest/1234/problem/A">#31 Equalize Prices Again</a>: When Inputs are large, sometimes compiler outputs number in undesirable precision. In such situations use (i) std::fixed – Fixed Floating-point notation (ii) std::scientific – Scientific floating-point notation (iii) std::hexfloat – Hexfloat floating-point notation (iv) std::defaultfloat – defaultfloat floating-point notation
> <a href="https://www.geeksforgeeks.org/data-type-ranges-and-their-macros-in-c/">Data Type Ranges and their macros in C++</a>
- <a href="https://codeforces.com/contest/318/problem/A">#39 Even Odds</a>: Most of the times, in competitive programming, there is a need to assign the variable, the maximum or minimum value that data type can hold, but remembering such a large and precise number comes out to be a difficult job. Therefore, C++ has certain macros to represent these numbers, so that these can be directly assigned to the variable without actually typing the whole number.
> <a href="https://www.geeksforgeeks.org/file-handling-c-classes/">File Handling through C++ Classes</a>
- <a href="https://codeforces.com/contest/35/problem/A">#49 Shell Game</a>: Use these two for File I/O problems (i) ifstream cin("input.txt") (ii) ofstream cout("output.txt") (No file handling code works for CLion, maybe because of problems in locating the file!)
> <a href="https://iitd-plos.github.io/col100/lec/maps.html">Map data structure</a>
- <a href="https://codeforces.com/contest/43/problem/A">#50 Football</a>: (i) m.find(key) != m.end(), Returns true if key exists in m. (ii) m\[key] = value, Inserts the key-value pair if the key does not already exist; else (if key already exists), overwrites
> <a href="https://www.geeksforgeeks.org/program-check-input-integer-string/">Program to check if input is an integer or a string</a>
- <a href="https://codeforces.com/contest/56/problem/A">#51 Bar</a>:
````
bool isNumber(string s)
{
    for (int i = 0; i < s.length(); i++)
        if (isdigit(s[i]) == false)
            return false;
 
    return true;
}
````
> <a href="https://www.geeksforgeeks.org/substring-in-cpp/">Substring in C++</a>
- <a href="https://codeforces.com/contest/108/problem/A">#56 Palindromic Times</a>:
````
string s1 = "Geeks"; 
string r = s1.substr(1, 3); // both index inclusive
cout << "String is: " << r; 
````
````
Output: String is: eek
````
- pt5
- pt5
- pt5
- pt5
- pt5


## Something1

- pt1
- pt2
- pt3
- pt4
- pt5

---

