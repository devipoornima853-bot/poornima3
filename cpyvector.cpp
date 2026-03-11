#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 3, 5, 7, 9};
    vector<int> temp(v.size());

    
    reverse_copy(v.begin(), v.end(), temp.begin());

    
    v = temp;

    for (auto i : v)
        cout << i << " ";
    return 0;
}