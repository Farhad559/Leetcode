// Complexity Almost O(n^2)
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
// Complexity almost O(n^2) but simple implementation
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i=0; i<arr.size()-1; i++){
            arr[i] = *max_element(arr.begin()+i+1, arr.end());
        }
        arr[n-1] = -1;
        return arr;
    }
};
