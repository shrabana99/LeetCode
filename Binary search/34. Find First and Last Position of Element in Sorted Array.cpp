// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while(l <= r){
            int md = (l + r)/2;
            if(nums[md] < target)
                l = md + 1;
            else
                r = md - 1;
        }

        if(l == nums.size() || nums[l] != target)
            return {-1, -1};

        int left = l;
        l = 0, r = nums.size() - 1;
        while(l <= r){
            int md = (l + r)/2;
            if(nums[md] > target)
                r = md - 1;
            else
                l = md + 1;
        }
        return {left, r};
    }
};
