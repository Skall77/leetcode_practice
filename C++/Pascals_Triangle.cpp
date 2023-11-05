class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ret(numRows);
        int i = 0;
        while (i < numRows) {
            ret[i].resize(i + 1);
            ret[i][0] = ret[i][i] = 1;
            int j = 1;
            while (j < i) {
                ret[i][j] = ret[i - 1][j - 1] + ret[i - 1][j];
                j++;
            }
            i++;
        }
        return ret;
    }
};