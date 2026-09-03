

class Solution {
public:

    string decode(string &s, int &i) {

        string curr = "";
        int num = 0;

        while(i < s.size()) {

            // Number
            if(isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
                i++;
            }

            // Opening bracket
            else if(s[i] == '[') {
                i++;

                string temp = decode(s, i);

                for(int j = 0; j < num; j++)
                    curr += temp;

                num = 0;
            }

            // Closing bracket
            else if(s[i] == ']') {
                i++;
                return curr;
            }

            // Normal character
            else {
                curr += s[i];
                i++;
            }
        }

        return curr;
    }

    string decodeString(string s) {
        int i = 0;
        return decode(s, i);
    }
};