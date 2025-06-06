class Solution {
public:
    int maxArea(vector<int>& h) {
        int l = 0;
        int r = h.size()-1;
        int maxwater = 0;
        while (l<r){
            maxwater = max(maxwater, (min(h[l],h[r])*(r-l)));
            if (h[l]<h[r]) {
                
                l++;
            } else {
                
                r--;
            }
        }
        return maxwater;
    }
};