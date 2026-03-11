#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1 = {2, 4, 1, 5, 3};
    vector<int> v2;

    
    copy(v1.begin(), v1.end(), back_inserter(v2));

    for (auto i : v2)
        cout << i << " ";
    return 0;
}