class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int size = nums.size();
        vector<int> prefix(size + 1, 0), suffix(size + 1, 0);
        prefix[0] = nums[0];
        suffix[size - 1] = nums[size - 1];
        for (int i = 1,j = size - 2; i < size && j >= 0; i++, j--) {
            prefix[i] = nums[i] * prefix[i - 1];
            suffix[j] = nums[j] * suffix[j + 1];
        }

        vector<int> ans;
        ans.push_back(suffix[1]);
        for (int i = 1; i < size - 1; i++) {
            ans.push_back(prefix[i - 1] * suffix[i + 1]);
        }
        ans.push_back(prefix[size - 2]);

        return ans;
    }
};
