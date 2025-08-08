class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int l=0;
        int r=arr.size()-1;
        vector<int>v;
        for(int i=0;i<arr.size();i++) {
            arr[i]=abs(arr[i]*arr[i]);
        }
        for(int i=0;i<arr.size();i++) {
            if(arr[l]>arr[r]) {
                v.push_back(arr[l]);
                l++;
            } else {
                v.push_back(arr[r]);
                r--;
            }

        }
        reverse(v.begin(),v.end());
        return v;
    }
};
