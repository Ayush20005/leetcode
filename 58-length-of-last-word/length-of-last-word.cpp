class Solution {
public:
    int lengthOfLastWord(string s) {
        
        
        int i=s.size()-1;
        while(i>=0 && s[i]== ' '){
            i--;
        }
        int length=0;
        while(i>=0 && s[i]!= ' '){
            length++;
            i--;
        }
        return length;
        /*
        int n=s.size();
        int length=0;
        for(int i=n-1;i>=0;i--){
            
            if(s[i]!=' '){
               length++;
            }
           
        }
        return length;
        */
    }
};