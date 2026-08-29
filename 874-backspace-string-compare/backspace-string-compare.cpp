class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string stack1;
        for(char c:s){
            if(c!='#'){
                stack1.push_back(c);
            }
            else{
                if(!stack1.empty())
                stack1.pop_back();
            }
        }
           string stack2;
        for(char ch:t){
    
            if(ch!='#'){
                stack2.push_back(ch);
            }
            else{
                if(!stack2.empty())
                stack2.pop_back();
            }
        }
        if(stack1==stack2){
            return true;
        }
        else{
            return false;
        }
    }
};