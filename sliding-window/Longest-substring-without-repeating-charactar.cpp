class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>um;
        int l = 0;
        int r = 0;
        int maxl = 0;
        while (r<s.size()) {
            if (um.find(s[r])!=um.end()) {
                if (um[s[r]]>=l) {
                    l = um[s[r]]+1;
                } 
            }
            maxl = max(maxl, r-l+1);
            um[s[r]] = r;
            r++;
            
        }
        return maxl;
    }
};