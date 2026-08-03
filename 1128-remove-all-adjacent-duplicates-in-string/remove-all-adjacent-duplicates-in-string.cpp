class Solution {
public:
    string removeDuplicates(string s) {
      /*
       string stack;

    for (char c : s) {
        if (!stack.empty() && stack.back() == c) {
            stack.pop_back();
        } else {
            stack.push_back(c);
        }
    }

    return stack;
    }
    */
    stack<char>st;
    for(char c:s){
        if(!st.empty() && st.top()==c){
            st.pop();
        }
        else{
            st.push(c);
        }
    }
    string ans="";
    while(!st.empty()){
        ans+=st.top();
        st.pop();
          
    }
    reverse(ans.begin(),ans.end());
  return ans;
    }
};