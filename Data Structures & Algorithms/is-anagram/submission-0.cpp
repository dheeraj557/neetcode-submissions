class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        {
            return false;
        }
       unordered_map<char,int>m1,m2;
       for(char i:s)
       {
            m1[i]++;
       }
       for(char i:t)
       {
            m2[i]++;
       } 
       for(auto &p:m1)
       {
            if(m2[p.first]!=p.second)
            {
                return false;
            }
       }
       return true;
    }
};
