class Solution {
public:
    string reverseWords(string s) {

        // Step 1: Reverse the whole string
        reverse(s.begin(), s.end());

        string ans = "";
        int n = s.length();
        int i = 0;

        while (i < n) {

            // Skip spaces
            while (i < n && s[i] == ' ')
                i++;

            if (i >= n)
                break;

            string word = "";

            // Extract one word
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            // Reverse the word
            reverse(word.begin(), word.end());

            // Add to answer
            if (!ans.empty())
                ans += " ";

            ans += word;
        }

        return ans;
    }
};