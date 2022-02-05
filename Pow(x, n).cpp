class Solution {
public:
    double myPow(double x, int n) {
        // First approcach
        long long N = n;
        if(N < 0){
            N = -N;
            x = 1/x;
        }
        double result = 1;
        for(long long i=0;i<N;i++){
            result = result * x;
        }
        return result;
    }
};