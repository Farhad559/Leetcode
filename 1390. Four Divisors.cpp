class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        const int N=1e5+1;
        vector<int>sum(N,0);
        vector<vector<int>> divisors(N);
        for(int i=1;i<N;i++) {
            for(int j=i;j<N;j+=i) {
                divisors[j].push_back(i);
                sum[j]+=i;
        }
    }
        int res=0;
        for(int num : nums) {
            if(divisors[num].size()==4) res+=sum[num];
            }
        return res;
    }
};
