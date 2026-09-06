class Solution {
public:
   int compress(vector<char>& chars) {
    int write = 0;
    int read = 0;

    while (read < chars.size()) {
        char ch = chars[read];
        int count = 0;

        while (read < chars.size() && chars[read] == ch) {
            read++;
            count++;
        }

        chars[write] = ch;
        write++;

        if (count > 1) {
            string s = to_string(count);
            for (char digit : s) {
                chars[write] = digit;
                write++;
            }
        }
    }

    return write;
}
};