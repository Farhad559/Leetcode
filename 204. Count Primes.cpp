class Solution {
public:
    int countPrimes(int n) {
        vector<bool>primes(n+1,true);
        vector<int>v;
        primes[0]=primes[1]=false;
        for(int i=2;i<n;i++) {
            if(primes[i]) {
                v.push_back(i);
            for(int j=i*2;j<n;j+=i) primes[j]=false;
            }
        }
    return v.size();
    }
};
