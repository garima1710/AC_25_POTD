//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    string str = to_string(n);
    int l = str.length();
    for(int i=0;i<l;i++)
        if(str[i] == '0')
            str[i]='5';
    int x = stoi(str);
    return x;
}
//Time Complexity: O(K) where K is the number of digits in N
//Space Complexity: O(1)
