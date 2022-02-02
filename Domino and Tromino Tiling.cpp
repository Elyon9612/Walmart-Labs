class Solution {
public:
    int numTilings(int n) {
        // First approcach was trying to make DP but didn't think out all of cases

        // Second approach:

        int MOD = 1'000'000'007;
        if(n<=2)    return n;
        
        vector<long> f(n+1);
        vector<long> p(n+1);
        
        f[1] = 1;
        f[2] = 2;
        p[2] = 1;
        
        for(int i=3;i<n+1;i++){
            f[i] = (f[i-1] + f[i-2] + 2*p[i-1])%MOD;
            p[i] = (p[i-1] + f[i-2]) % MOD;
        }
        
        return f[n];
    }
};