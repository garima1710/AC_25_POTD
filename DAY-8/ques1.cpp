//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int ar[], int n) {
	    // code here
	    int z=0,index;
	    for(int i=0;i<n;i++)
	    {
	        if(ar[i] == 0)
	            z++;
	        if(ar[i] != 0 && z > 0)
	        {
	            index = i;
	            break;
	        }
	    }
	    
	    for(int i=0;index<n;i++)
	    {
	        if(ar[i] == 0)
	        {
	            swap(ar[i],ar[index]);
	            i--;
	            index++;
	        }
	    }
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
// Time complexity = O(n)
// Space complexity = O(1)
