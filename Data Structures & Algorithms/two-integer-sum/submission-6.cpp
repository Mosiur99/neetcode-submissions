class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> pos(10000000 + 1, -1);
        vector<int> neg(10000000 + 1, -1);
        for (int i = 0; i < nums.size(); i++) {
            int a = nums[i], b = target - a;
            if (a >= 0 && pos[a] != -1) {
                return {pos[a], i};
            }

            if (a < 0 && neg[abs(a)] != -1) {
                return {neg[abs(a)], i};
            }

            if (b >= 0) {
                pos[b] = i;
            }

            if (b < 0) {
                neg[abs(b)] = i;
            }
        }
    }
};
