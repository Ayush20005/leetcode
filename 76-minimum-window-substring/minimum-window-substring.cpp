class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char, int> need;
        unordered_map<char, int> window;

        // Store required frequency of each character
        for (char c : t) {
            need[c]++;
        }

        int left = 0;
        int count = 0;              // Number of satisfied character types
        int needCount = need.size();

        int mini = INT_MAX;
        int start = 0;

        for (int right = 0; right < s.size(); right++) {

            char c = s[right];
            window[c]++;

            // Character has reached its required frequency
            if (need.count(c) && window[c] == need[c]) {
                count++;
            }

            // Current window is valid
            while (count == needCount) {

                // Update minimum window
                int len = right - left + 1;

                if (len < mini) {
                    mini = len;
                    start = left;
                }

                // Remove left character
                char leftChar = s[left];
                window[leftChar]--;
                left++;

                // Window became invalid
                if (need.count(leftChar) &&
                    window[leftChar] < need[leftChar]) {
                    count--;
                }
            }
        }

        // No valid window found
        if (mini == INT_MAX) {
            return "";
        }

        return s.substr(start, mini);
    }
};