#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr1[5] = {6, 7, 8, 9, 10};
    int n = sizeof(arr1)/sizeof(arr1[0]);
  	int arr2[n];

    
    transform(arr1, arr1 + n, arr2, 
              [](int a) { 
                return a - 5; 
              });

    for (auto i : arr2)
        cout << i << " ";
    return 0;
}