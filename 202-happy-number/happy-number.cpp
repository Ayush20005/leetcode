class Solution {
public:
    bool isHappy(int n) {

        set<int> seen;

        while (true) {

            // If we have already seen this number,
            // we are stuck in a cycle
            if (seen.count(n)) {
                return false;
            }

            seen.insert(n);

            int sum = 0;

            // Calculate sum of squares of digits
            while (n > 0) {
                int digit = n % 10;
                sum += digit * digit;
                n = n / 10;
            }

            // If sum becomes 1, it is a happy number
            if (sum == 1) {
                return true;
            }

            n = sum;
        }
    }
};