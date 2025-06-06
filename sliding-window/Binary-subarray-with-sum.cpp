class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        map<int,int>m;
        int ct = 0;
        int ps = 0;
        for (int i = 0; i<nums.size(); i++) {
            m[ps]++;
            ps+=nums[i];
            if (m.find(ps-goal)!=m.end()) {
                ct+=m[ps-goal];
            }
        }
        return ct;
    }
};