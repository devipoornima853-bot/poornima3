#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 3, 5, 7, 9};

    
    v = vector<int>(v.rbegin(), v.rend());

    for (auto i : v)
        cout << i << " ";
  
    return 0;
}