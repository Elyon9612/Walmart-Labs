class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sum = 0;
        int current = 0;
        
        for(int i=0;i<nums.size();i++){
            current += i * nums[i];
            sum += nums[i];
        }
        
        int result = current;
        int n = nums.size()-1;
        while(n > 0){
            current = current - nums.size() * nums[n--] + sum; // The main point
            result = max(result,current);
        }
        return result;
    }
};