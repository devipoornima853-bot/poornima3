// C++ program to demonstrate priority 
// queue in reverse order
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    
    priority_queue<int, vector<int>, greater<int> > pq;
  

    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(15);
    pq.push(25);

    cout << "The priority queue in reverse order is : ";
    
    
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }

    return 0;
}