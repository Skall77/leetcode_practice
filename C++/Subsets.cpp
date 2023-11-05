class Solution {
public:
    vector<vector<int>> ret;

    void subsets_backtracking(vector<int>& nums, int begin, vector<int> temp) {
        if (begin == nums.size()) {
            ret.push_back(temp);
            return;
        }
        subsets_backtracking(nums, begin + 1, temp);
        temp.push_back(nums[begin]);
        subsets_backtracking(nums, begin + 1, temp);
        
    
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        subsets_backtracking(nums, 0, temp);
        return ret;
    }
};