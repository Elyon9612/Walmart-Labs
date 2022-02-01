class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // First approcach:
        if(s.length() ==0)  return 0;
        int result = 0;

        unordered_map<int,int> table;
        int left = 0,right = 0;
        while(right < s.length()){
            table[s[right]] ++;
            while(table[s[right]] > 1){
                table[s[left]] --;
                left ++;
            }
            result = max(result,right - left + 1);
            right ++;
        }
        return result;
    }
};