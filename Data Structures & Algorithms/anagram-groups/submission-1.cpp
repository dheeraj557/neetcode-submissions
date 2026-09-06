class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> m; // use map instead of unordered_map
        vector<vector<string>> res;

        for (string str : strs) {
            vector<int> temp(26, 0);
            for (char c : str) {
                temp[c - 'a']++;
            }
            m[temp].push_back(str);
        }

        for (auto &it : m) {
            res.push_back(it.second);
        }

        return res;
    }
};
