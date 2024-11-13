class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>v;
        map<int,int>m;
        for(int i=0;i<nums.size();i++) m[nums[i]]++;
        for(auto i:m) {
            if(i.second==2) v.push_back(i.first);
        }
        return v;
    }
};

//Better Runtime Complexity and No STL
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        nums.insert(nums.begin()+0,0);
        int x=nums.size();
        vector<int> hsh(x, 0);
        for(int i=0;i<nums.size();i++) {
            hsh[nums[i]]++;
        }
        vector <int>v;
        for(int i=0;i<nums.size();i++) {
            if(hsh[i]==2) v.push_back(i);
        }
        return v;
    }
};
