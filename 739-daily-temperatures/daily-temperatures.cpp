class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        /*
        int n=temperatures.size();
        vector<int>answer;
        for(int i=0;i<n;i++){
            bool found= false;
            for(int j=i+1;j<n;j++){
                if(temperatures[i]<temperatures[j]){
                  int result=j-i;
                  answer.push_back(result);
                  found =true;
                break;
                }
            }
            if(!found){
                answer.push_back(0);
            }
        }
        return answer;
    
    */
    int n = temperatures.size();
    vector<int> answer(n, 0);
    stack<int> st;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
            int prevIndex = st.top();
            st.pop();
            answer[prevIndex] = i - prevIndex;
        }

        st.push(i);
    }

    return answer;
    }
};