//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
    vector<int> v;
    int min1=100000;
    int min2=100000;
    for(int i=0;i<n;i++)
    {
        if(a[i]<min1)
            min1=a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<min2 && min1 < a[i])
            min2=a[i];
    }
    if(min1 == 100000 || min2 == 100000)
    {
        v.push_back(-1);
        return v;
    }
    v.push_back(min1);
    v.push_back(min2);
    return v;
}