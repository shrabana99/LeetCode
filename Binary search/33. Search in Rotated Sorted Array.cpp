// https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        // first find the minimum element / pivot
        int n = nums.size();
        if(n == 0) return -1;
        int l = 0, r = n-1;
        while(l < r){
            int md = (l+r)/2;
            if(nums[md] > nums[n-1]) l = md + 1;
            else r = md;
        }

        // binary search considering pivot
        if(target <= nums[n-1]){ //target is in the right part
            r = n-1;
        }
        else{ // target in the left part
            r = l-1;
            l = 0;
        }

        while(l <= r){
            int md = (l+r)/2;
            if(nums[md] == target) return md;
            if(nums[md] < target) l = md + 1;
            else r = md - 1;
        }

        return -1;
    }
};
