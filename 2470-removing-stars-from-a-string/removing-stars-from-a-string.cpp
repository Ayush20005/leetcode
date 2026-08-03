class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(char c:s){
            if(c=='*'){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();//so that the top element should be remove otherwise the same element would get copied.
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};