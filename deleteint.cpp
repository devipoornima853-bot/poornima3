#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> ms = {5, 3, 3, 1};

    ms.erase(ms.begin());

    
    ms.erase(3);

    
    for (auto x : ms)
        cout << x << " ";

    return 0;
}