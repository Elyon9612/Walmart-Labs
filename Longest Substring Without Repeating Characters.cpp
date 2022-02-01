class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Second approcach:
        vector<int> table(256,0);
        // unordered_map<char,int> table;
        // Right node go first until find table[right] > 1 then go left node untill table[right] == 1
        // result = max(r-l+1)
        int result = 0;
        int l = 0,r = 0;
        for(r=0;r<s.length();r++){
            table[s[r]] ++;
            while(table[s[r]] > 1){
                table[s[l]] --;
                l ++;
            }
            result = max(result,r-l+1);
        }
        
        return result;
    }
};