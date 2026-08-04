class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> stack;

        for (const string& ops : tokens) {

            if (ops == "+" || ops == "-" || ops == "*" || ops == "/") {

                int a = stack.back();
                stack.pop_back();

                int b = stack.back();
                stack.pop_back();

                if (ops == "+")
                    stack.push_back(b + a);
                else if (ops == "-")
                    stack.push_back(b - a);
                else if (ops == "*")
                    stack.push_back(b * a);
                else
                    stack.push_back(b / a);

            } else {
                stack.push_back(stoi(ops));
            }
        }

        return stack.back();
    }
};