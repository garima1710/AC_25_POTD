class Solution {
public:
    void duplicateZeros(vector<int>& arr) {

        int n = arr.size();
        int x = n + count(arr.begin(),arr.end(),0);
        for(int i=n-1;i>=0;i--)
        {
            if(--x < n)
                arr[x] = arr[i];
            if(arr[i] == 0 && --x < n)
                arr[x] = 0;
        }
    }
};
