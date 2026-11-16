class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, int> count;
        map<string, vector<string>> ans;
        int size = strs.size();
        for (int i = 0; i < size; i++) {
            string x = strs[i];
            sort(x.begin(), x.end());
            ans[x].push_back(strs[i]);
        }

        vector<vector<string>> ans2;
        for (auto it1 : ans) {
            vector<string> ans3;
            for (auto it2 : it1.second) {
                ans3.push_back(it2);
            }
            ans2.push_back(ans3);
        }

        return ans2;
    }
};
