class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        size_t n = nums.size();
        size_t i = 0;
        size_t j = i;
        while (i < n * 2) {
            if (j == n)
                j = 0;
            ans.push_back(nums[j]);
            i++;
            j++;
        }
        return ans;
    }
};