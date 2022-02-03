class Solution {
public:
    vector<string> result;
    vector<string> generateParenthesis(int n) {
        helper(0,n,"");
        return result;
    }
private:
    //  index for # of lefting ')' and n for # of pair of '(' and ')'
    void helper(int index,int n,string s){
        if(n == 0){
            for(int i=0;i<index;i++){
                s += ')';
            }
            result.push_back(s);
        } else{
            string new_str = s + '(';
            helper(index+1,n-1,new_str);
            if(index > 0){
                s += ')';
                helper(index-1,n,s);
            }
        }
    }
};