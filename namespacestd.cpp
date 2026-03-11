#include <iostream>
#include <iterator>
#include <set>
using namespace std;

int main()
{
    multiset<int> ms = {5, 3, 3, 1};


    auto it1 = ms.begin();
    cout << *it1 << " ";

    
    auto it2 = next(it1, 2);
    cout << *it2;

    return 0;
}