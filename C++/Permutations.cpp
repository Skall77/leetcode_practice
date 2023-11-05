class Solution {
public:

    void permute_recursive(vector<int>& nums, int begin, int end, vector<vector<int>>& ret) {
        if (begin == end) {
            ret.push_back(nums);
            return;
        }
        else {
            for (int i = begin; i <= end; i++) {
                std::swap(nums[begin], nums[i]);
                permute_recursive(nums, begin + 1, end, ret);
                std::swap(nums[begin], nums[i]);
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ret;
        int n = nums.size();
        permute_recursive(nums, 0, n - 1, ret);
        return ret;
    }
};