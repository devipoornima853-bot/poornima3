#include <iostream>
#include <set>
using namespace std;

int main()
{
    
    multiset<int> ms1;
    
    multiset<int> ms2 = {5, 3, 3, 1};
    
    for (auto i : ms2)
        cout << i << " ";

    return 0;
}