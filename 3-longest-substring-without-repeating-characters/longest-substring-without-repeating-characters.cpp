class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;

/*
        int left = 0;
        int maxi = 0;

        for (int right = 0; right < s.size(); right++) {

            while (st.find(s[right]) != st.end()) {
                st.erase(s[left]);
                left++;
            }

            st.insert(s[right]);

            maxi = max(maxi, right - left + 1);
        }

        return maxi;
  */
int left=0;
int maxi=0;
for(int i=0;i<s.size();i++){
    mp[s[i]]++;

    while(mp[s[i]]>1){
        mp[s[left]]--;
        left++;
    }
    maxi=max(maxi,i-left+1);
}
  return maxi;
    }
};