class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>result;
        for(int i=0;i<nums.size();i++) {
            for(int j=i;j<nums.size();j++) {
                if(nums[i]+nums[j]==target) {
                    if(i!=j) {
                        result.push_back(i);
                        result.push_back(j);
                    }
                }
            }
        }
        return result;
    }
};
