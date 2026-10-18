class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result = 0;
        int size = s.size();
        unordered_set<char>duplicates;
        int i = 0 , j = 0;
        int length = 0;
        while(j<size)
        {
            if(duplicates.find(s[j])==duplicates.end())
            {
                length = j-i+1;
                result = max(result,length);
                duplicates.insert(s[j]);
                j++;
            }
            else{
                duplicates.erase(s[i]);
                i++;
            }
        }
        return result;        
    }
};
