class Solution {
public:
    int calculate(string s) {
        vector<int> stack;
    int num = 0;
    char sign = '+';

    for (int i = 0; i < s.size(); i++) {
        char c = s[i];

        if (isdigit(c)) {
            num = num * 10 + (c - '0');
        }

        if (string("+-*/").find(c) != string::npos || i == (int)s.size() - 1) {
            if (sign == '+') stack.push_back(num);
            else if (sign == '-') stack.push_back(-num);
            else if (sign == '*') { stack.back() *= num; }
            else if (sign == '/') { stack.back() /= num; }

            sign = c;
            num = 0;
        }
    }

    int result = 0;
    for (int val : stack) result += val;
    return result;
         }
};