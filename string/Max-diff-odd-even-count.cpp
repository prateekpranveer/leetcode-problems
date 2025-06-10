class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>um;
        for (auto x:s) {
            um[x]++;
        }
        int maxdiff = INT_MIN;

        for (auto x:um) {
            for (auto y:um) {
                if (x.second%2==0) {
                    if (y.second%2!=0) {
                        maxdiff = max(maxdiff, y.second-x.second);
                    }
                }
            }
        }
        return maxdiff;
    }
};