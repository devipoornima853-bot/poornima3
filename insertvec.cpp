#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1 = {2, 4, 1, 5, 3};
    vector<int> v2;

    
    v2.insert(v2.begin(), v1.begin(), v1.end());

    for (auto i : v2)
        cout << i << " ";
    return 0;
}