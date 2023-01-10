//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    bool prime(int n)
    {
        if(n == 0 || n == 1)
            return false;
        for(int i=2;i<=n/2;i++)
            if(n%i == 0)
                return false;
        return true;
    }
    int primeSum(int N){
        // code here
        int sum = 0;
        while(N != 0)
        {
            if(prime(N%10))
                sum += N%10;
            N /= 10;
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.primeSum(N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
