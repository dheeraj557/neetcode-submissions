class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for(string str:strs)
        {
            res+=to_string(str.size())+"#"+str;
        }
        return res;
    }

    vector<string> decode(string s) {
       vector<string> res;
        int i = 0;
        while (i < s.size()) {
            // find the delimiter '#'
            int j = i;
            while (s[j] != '#') j++;
            int len = stoi(s.substr(i, j - i)); // length of next word
            string word = s.substr(j + 1, len); // extract word
            res.push_back(word);
            i = j + 1 + len; // move pointer forward
        }
        return res;
    }
};
