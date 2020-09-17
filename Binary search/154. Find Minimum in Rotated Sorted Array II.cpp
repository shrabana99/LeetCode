// https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/

// need to handle duplicates like  [3,3,1,3]

class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size()-1;
        while(l < r){
            int md = (l+r)/2;
            if(nums[md] > nums[r]){
                l = md+1;
            }

            else if(nums[md] < nums[r]){
                r = md;
            }
            else { // md and r are same
                if (r != l && nums[r] >= nums[r-1])  // [1,1,1,1,2,1,1]
                    r--;
                else
                    return nums[r];
            }
        }
        return nums[l];
    }
};
