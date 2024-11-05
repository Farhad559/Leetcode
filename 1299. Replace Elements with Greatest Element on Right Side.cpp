class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>res;
        int maxi=0;
        for(int i=0;i<arr.size();i++) {
            for(int j=i+1;j<arr.size();j++) maxi=max(maxi,arr[j]);
                res.push_back(maxi);
                maxi=0;
            }
            res[arr.size()-1]=-1;
        return res;
    }
};
