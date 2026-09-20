class Solution {
public:
    bool isPalindrome(string s) {
        stack<char> st;
        for (char c : s) {
            if (isalnum(c)) { // only letters and digits
                st.push(tolower(c));
            }
        }

        for (char c : s) {
            if (!isalnum(c)) continue;
            if (st.empty()) return false; // safety check
            if (tolower(c) != st.top()) {
                return false;
            }
            st.pop();
        }

        return true;
    }
};
