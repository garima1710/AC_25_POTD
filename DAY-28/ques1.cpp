class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string str = to_string(num);
        int l = str.length();
        int i=0;
        int c=0;
        while(i+k <= l)
        {
            int x = stoi(str.substr(i++,k));
            // cout<<x<<endl;
            if(x == 0)
                continue;
            if(num%x == 0)
                c++;
            // num /= 10;
        } 
        return c;       
    }
};
