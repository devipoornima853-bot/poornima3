// C++ Program to find permutation 
// of string using rotate() function
#include <bits/stdc++.h>
using namespace std;

// Recursive Function to generate permutation
void recurPermute(string s, string x, set<string> &res) {

    // if string s becomes empty, then 
    // we have permutation stored in x
    if (s.size() == 0) {
        
        // store the permutation in res
        res.insert(x);
        return;
    }

    // else iterate through the string
    for (int i = 0; i < s.size(); i++) {

        // remove the first character from 
        // string s and add to string x
        recurPermute(s.substr(1), x + s[0], res);

        // rotating such that second element becomes first
        rotate(s.begin(), s.begin() + 1, s.end());
    }
}


vector<string> findPermutation(string &s){


    set<string> res;

    
    recurPermute(s, "", res);

    
    vector<string> ans;
    for(auto i:res){
        ans.push_back(i);
    }
    return ans;
}
int main() {
    string s = "ABC";
    vector<string> ans = findPermutation(s);
    for(auto i: ans){
        cout << i << " ";
    }
    return 0;
}