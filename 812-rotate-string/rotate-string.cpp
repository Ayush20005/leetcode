class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        int m=goal.size();
        //if(n!=m){
          //  return false;
       // }
        string x= s+s;
        int pos= x.find(goal);
        if(pos!=string::npos){
            return true;
            //npos="no valid position".
        }
        else { return false;}
        return pos;
    }
};