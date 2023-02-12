//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        
        map<char,int> mp;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == 'b' || s[i] == 'a' || s[i] == 'n')
                mp[s[i]] += 2;
            else if(s[i] == 'l' || s[i] == 'o')
                mp[s[i]]++;
        }
        int mx = INT_MAX;
        for(auto i : mp)
        {
            // cout<<i.first<<" - "<<i.second<<endl;
            if(i.second/2 < mx)
                mx = i.second/2;
        }
        return mx;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends
