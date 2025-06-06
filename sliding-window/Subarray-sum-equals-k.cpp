class Solution {
public:
    int subarraySum(vector<int>& nums, int goal) {
       unordered_map<int,int>s;
       int ct = 0;
       int pf = 0;
       for (int i = 0; i<nums.size(); i++) {
            pf = pf+nums[i];
            if (pf==goal) ct++;
            if(s.find(pf-goal)!=s.end()) {
                ct+=s[pf-goal];
            }
            s[pf]++;
       }

        return ct;
    }
};