//STL Approach Complexity O(logn)
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(binary_search(nums.begin(),nums.end(),target)==1) {
            auto it1=  lower_bound(nums.begin(),nums.end(),target);
            int ans1 = it1-nums.begin();
            return ans1;
        } else {
            auto it2=  upper_bound(nums.begin(),nums.end(),target);
            int ans2 = it2-nums.begin();
            return ans2;
        }
    }
};
//Normal Approach Complexity O(logn)
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,h=nums.size();
        while(l<h) {
            int mid=(l+h)/2;
            if(nums[mid]>target) h=mid;
            else if(nums[mid]<target) l=mid+1;
            else return mid;
        }
        return h;
    }
};
