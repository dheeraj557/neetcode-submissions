class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m;
        vector<vector<string>>res;
        for(string str:strs)
        {
            string temp = str;
            sort(temp.begin(),temp.end());
            m[temp].push_back(str);
        }
        for(auto &it:m)
        {
            res.push_back(it.second);
        }
        return res;
    }
};
