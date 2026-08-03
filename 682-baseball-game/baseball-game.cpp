class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> stack;
        for(const string& op: operations){
            if(op=="C"){
                stack.pop_back();
            }
            else if(op=="D"){
                stack.push_back(2*stack.back());
            }
            else if(op=="+"){
                stack.push_back(stack[stack.size()-1]+stack[stack.size()-2]);
            }
            else{
                stack.push_back(stoi(op));
            }
}
     int sum=0;
     for(int score: stack){
        sum+=score;
     }
return sum;
    }
};