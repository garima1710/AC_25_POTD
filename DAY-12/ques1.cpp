class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {

        int l = words.size();
        int c=0;
        for(int i=0;i<l;i++)
        {
            string t = words[i];
            int x = t.length();
            if(t == s.substr(0,x))
                c++;
        }
        return c;
    }
};
