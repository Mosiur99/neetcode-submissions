class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> track;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            if(i > 0) {
                if (track[target - nums[i]]) {
                    return {track[target - nums[i]] - 1, i};
                }
            }
            track[nums[i]] = i + 1;
        }
    }
};
