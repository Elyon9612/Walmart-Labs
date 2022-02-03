class Solution {
public:
    // First approach for sorting each words of the array
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        
        unordered_map<string,vector<string>> table;
        
        for(auto s:strs){
            string tmp = s;
            sort(s.begin(),s.end());
            table[s].push_back(tmp);
        }
        for(auto a:table){
            result.push_back(a.second);
        }
        return result;
    }
};