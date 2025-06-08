class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>p;
        vector<int>s;
        vector<int>ans;
        int prefix = 1;
        int suffix = 1;
        for(int i = 0; i<nums.size(); i++) {
            p.push_back(prefix);
            prefix = prefix*nums[i];
        }
        for(int i = nums.size()-1; i>=0; i--) {
            s.push_back(suffix);
            suffix = suffix*nums[i];
        }
        reverse(s.begin(), s.end());
        for (int i = 0; i<nums.size(); i++) {
            ans.push_back(p[i]*s[i]);
        }
        return ans;

    }
};