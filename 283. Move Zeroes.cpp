class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=0;
        for(int r=0;r<nums.size();r++) {
            swap(nums[r],nums[l]);
            if(nums[l])l++;
        }
    }
};
