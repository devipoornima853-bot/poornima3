#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1 = {6, 7, 8, 9, 10};
    vector<int> v2 = {1, 4, 8, 9, 43};
    vector<int> v(v1.size());


    transform(v1.begin(), v1.end(), v2.begin(),
              v.begin(),
              [](int a, int b) { 
                return a + b; 
              });

    for (auto i : v)
        cout << i << " ";
    return 0;
}