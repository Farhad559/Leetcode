class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int x =nums.size();
        vector<int> hsh(x+1, 0);
        for(int i=0;i<x;i++) hsh[nums[i]]++;
        vector<int>v;
        for(int i=1;i<=x;i++) {
            if(hsh[i]==0) v.push_back(i);
        }
        return v;
    }
};
