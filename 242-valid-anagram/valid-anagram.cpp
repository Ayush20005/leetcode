class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int y=t.size();
        if(n!=y){return false;}
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
       if(s==t){
            //return s==t;
            return true;
        }
        return false;
    }
};