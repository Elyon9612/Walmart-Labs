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


class Solution {
public:
    double myPow(double x, int n) {
        // Second approach with 2^n = 2^(2*(n/2))
        long long N = n;
        if(N < 0){
            N = -N;
            x = 1/x;
        }
        
        return helper(x,N);
    }
private:
    double helper(double x,long long n){
        if(n == 0)  return 1.0;
        
        double half = helper(x,n/2);
        if(n % 2 ==0)
            return half * half;
        else
            return half * half * x;
    }
};