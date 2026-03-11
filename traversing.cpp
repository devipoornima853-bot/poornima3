#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> ms = {5, 3, 3, 1};

    
    for (auto i : ms)
        cout << i << " ";

    return 0;
}