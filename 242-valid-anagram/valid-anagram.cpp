class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if (s.size() != t.size()) return false;

        int freq[26] = {0};

        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) return false;
        } return true;

        /*
        int n=s.size();
        int y=t.size();
        if(n!=y){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
        */
    }
};