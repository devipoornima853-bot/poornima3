#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "GEEKSFORGEEKS";

    
    transform(s.begin(), s.end(), s.begin(), 
              [](char c) {
                  return tolower(c);
             });

    cout << s;
    return 0;
}