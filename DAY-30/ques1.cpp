class Solution {
public:
    int numOfSubarrays(vector<int>& ar, int k, int threshold) {

        int cnt = 0;
        int sum = 0;
        for(int i=0;i<k;i++)
            sum += ar[i];
        int avg = sum/k;
        if(avg >= threshold)
            cnt++;
        int first,last;
        for(int i=1;i<ar.size()-k+1;i++)
        {
            first = ar[i-1];
            last = ar[i+k-1];
            sum = sum - first + last;
            avg = sum/k;
            // cout<<sum<<" "<<avg<<endl;
            if(avg >= threshold)
                cnt++;
        }

        return cnt;        
    }
};
