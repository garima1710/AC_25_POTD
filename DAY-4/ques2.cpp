class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int r = matrix.size();
        int c = matrix[0].size();

        for(int i=0;i<r;i++)
            for(int j=i;j<c;j++)
                swap(matrix[i][j],matrix[j][i]);
                
        int l=0,e=c-1;
        while(l<e)
        {
            for(int i=0;i<r;i++)
                swap(matrix[i][l],matrix[i][e]);
            l++;
            e--;
        }
    }
};

//Time Complexity = O(n^2)
