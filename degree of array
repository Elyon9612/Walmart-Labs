class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        // First approach:
        
        int large = 0;
        int result = INT_MAX-1;
        unordered_map<int,int> freq_table;
        vector<int> table;
        
        for(auto a:nums){
            freq_table[a] ++;
        }
        
        for(auto a:freq_table){
            large = max(large,a.second);
        }
        
        for(auto a:freq_table){
            if(large == a.second){
                table.push_back(a.first);
            }
        }
        // for(auto& a:freq_table){
        //     cout << freq_table.size() << endl;
        //     if(large != a.second){
        //         freq_table.erase(a.first);      // No idea why it is not work
        //     }
        // }

        for(auto a:table){
            int left =0,right = nums.size()-1;
            while(nums[left] != a)    left ++;
            while(nums[right]!= a)    right --;
            result = min(result,right-left+1);
        }
        return result;
    }
};


class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        // Second approach:
        
        int result = nums.size();
        unordered_map<int,int> left,right,count;            // Using three hash table
        
        for(int i=0;i<nums.size();i++){
            int cur = nums[i];
            if(left.find(cur) == left.end())    left[cur] = i;
            right[cur] = i;
            count[cur] ++;
        }
        
        int degree = 0;
        for(auto a:count){
            degree = max(degree,a.second);
        }
        
        for(auto a:count){
            if(a.second == degree){
                result = min(result,right[a.first] - left[a.first] + 1);
            }
        }
        
        return result;
    }
};