class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> count;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            count[nums[i]]++;
        }

        multimap<int, int, greater<int>> reverse;
        for (auto it: count) {
            reverse.insert({it.second, it.first});
        }

        // sort(reverse.begin(), reverse.end());
        vector<int> ans;
        for (auto it: reverse) {
            if (k == 0) {
                break;
            }
            k--;
            ans.push_back(it.second);
        }

        return ans;
    }
};
