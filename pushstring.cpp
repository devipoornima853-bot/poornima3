
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    priority_queue<string, vector<string>, greater<string> > pq;
    
    
    pq.push("physics");
    pq.push("chemistry");
    pq.push("maths");
    pq.push("socialstudies");
    pq.push("biology");

    cout << "The priority queue in reverse order is : ";

    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }

    return 0;
}