class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0;
        int r = nums.size()-1;
        int oneans = -1;
        int secondans = -1;
        while (l<=r) {
            int mid = (l+r)/2;
            if (nums[mid]==target) {
                oneans = mid;
                r = mid-1;
            }
            else if (target>nums[mid]) {
                l = mid+1;
            } else {
                r = mid-1;
            }
        }

        l = 0;
        r=nums.size()-1;
        while (l<=r) {
            int mid = (l+r)/2;
            if (target==nums[mid]) {
                secondans = mid;
                l = mid+1;
            } else if (target>nums[mid]) {
                l = mid+1;
            } else {
                r = mid-1;
            }
        }

        return {oneans, secondans};
    }
};